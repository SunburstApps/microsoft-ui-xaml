// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using System;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Markup;
using Windows.UI;
using System.Windows.Input;
using Windows.UI.Xaml.Automation;

using TabView = Microsoft.UI.Xaml.Controls.TabView;
using TabViewItem = Microsoft.UI.Xaml.Controls.TabViewItem;
using TabViewTabCloseRequestedEventArgs = Microsoft.UI.Xaml.Controls.TabViewTabCloseRequestedEventArgs;
using SymbolIconSource = Microsoft.UI.Xaml.Controls.SymbolIconSource;
using System.Collections.ObjectModel;
using Windows.Devices.PointOfService;

namespace MUXControlsTestApp
{
    public class TabDataItem : DependencyObject
    {
        public String Header { get; set; }
        public SymbolIconSource IconSource { get; set; }
        public String Content { get; set; }
    }

    [TopLevelTestPage(Name = "TabView")]
    public sealed partial class TabViewPage : TestPage
    {
        int _newTabNumber = 1;
        SymbolIconSource _iconSource;

        public TabViewPage()
        {
            this.InitializeComponent();

            _iconSource = new SymbolIconSource();
            _iconSource.Symbol = Symbol.Placeholder;

            ObservableCollection<TabDataItem> itemSource = new ObservableCollection<TabDataItem>();
            for (int i = 0; i < 5; i++)
            {
                var item = new TabDataItem();
                item.IconSource = _iconSource;
                item.Header = "Item " + i;
                item.Content = "This is tab " + i + ".";
                itemSource.Add(item);
            }
            DataBindingTabView.TabItemsSource = itemSource;
        }

        public void IsClosableCheckBox_CheckChanged(object sender, RoutedEventArgs e)
        {
            if (FirstTab != null)
            {
                FirstTab.IsClosable = (bool)IsClosableCheckBox.IsChecked;
            }
        }

        public void AddButtonClick(object sender, object e)
        {
            if (Tabs != null)
            {
                TabViewItem item = new TabViewItem();
                item.IconSource = _iconSource;
                item.Header = "New Tab " + _newTabNumber;
                item.Content = item.Header;
                item.SetValue(AutomationProperties.NameProperty, item.Header);

                Tabs.TabItems.Add(item);

                _newTabNumber++;
            }
        }

        public void RemoveTabButton_Click(object sender, RoutedEventArgs e)
        {
            if (Tabs != null && Tabs.TabItems.Count > 0)
            {
                Tabs.TabItems.RemoveAt(Tabs.TabItems.Count - 1);
            }
        }


        public void SelectItemButton_Click(object sender, RoutedEventArgs e)
        {
            if (Tabs != null)
            {
                Tabs.SelectedItem = Tabs.TabItems[1];
            }
        }

        public void SelectIndexButton_Click(object sender, RoutedEventArgs e)
        {
            if (Tabs != null)
            {
                Tabs.SelectedIndex = 2;
            }
        }

        public void ChangeShopTextButton_Click(object sender, RoutedEventArgs e)
        {
            SecondTab.Header = "Changed";
        }

        public void CustomTooltipButton_Click(object sender, RoutedEventArgs e)
        {
            ToolTipService.SetToolTip(SecondTab, "Custom");
        }

        public void GetTab0ToolTipButton_Click(object sender, RoutedEventArgs e)
        {
            GetToolTipStringForTab(FirstTab, Tab0ToolTipTextBlock);
        }

        public void GetTab1ToolTipButton_Click(object sender, RoutedEventArgs e)
        {
            GetToolTipStringForTab(SecondTab, Tab1ToolTipTextBlock);
        }

        public void GetToolTipStringForTab(TabViewItem item, TextBlock textBlock)
        {
            var tooltip = ToolTipService.GetToolTip(item);
            if (tooltip is ToolTip)
            {
                textBlock.Text = (tooltip as ToolTip).Content.ToString();
            }
            else
            {
                textBlock.Text = tooltip.ToString();
            }
        }

        private void TabWidthComboBox_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            if (Tabs != null)
            {
                switch (TabWidthComboBox.SelectedIndex)
                {
                    case 0: Tabs.TabWidthMode = Microsoft.UI.Xaml.Controls.TabViewWidthMode.SizeToContent; break;
                    case 1: Tabs.TabWidthMode = Microsoft.UI.Xaml.Controls.TabViewWidthMode.Equal; break;
                }
            }
        }

        private void TabViewSelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            SelectedIndexTextBlock.Text = Tabs.SelectedIndex.ToString();
        }

        private void TabViewTabCloseRequested(object sender, Microsoft.UI.Xaml.Controls.TabViewTabCloseRequestedEventArgs e)
        {
            if ((bool)HandleTabCloseRequestedCheckBox.IsChecked)
            {
                Tabs.TabItems.Remove(e.Tab);
            }
        }

        private void FirstTab_CloseRequested(object sender, Microsoft.UI.Xaml.Controls.TabViewTabCloseRequestedEventArgs e)
        {
            if ((bool)HandleTabItemCloseRequestedCheckBox.IsChecked)
            {
                Tabs.TabItems.Remove(e.Tab);
            }
        }

        private void TabViewTabDroppedOutside(object sender, Microsoft.UI.Xaml.Controls.TabViewTabDroppedOutsideEventArgs e)
        {
            TabViewItem tab = e.Tab;
            if (tab != null)
            {
                TabDroppedOutsideTextBlock.Text = tab.Header.ToString();
            }
        }
    }
}
