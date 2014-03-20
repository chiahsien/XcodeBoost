//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import "XCSelectionSource.h"

@class NSMenu, PBXExtendedOutlineView;

@interface PBXBookmarksModule : PBXProjectModule <XCSelectionSource>
{
    PBXExtendedOutlineView *_bookmarksOutlineView;
    NSMenu *_itemContextualMenu;
    NSMenu *_viewContextualMenu;
    NSMenu *_openAsSubmenu;
}

- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (void)delete:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (void)_openAsAction:(id)arg1;
- (BOOL)outlineView:(id)arg1 willReturnMenu:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)revealInFinder:(id)arg1;
- (void)openWithFinder:(id)arg1;
- (void)revealCurrentFileInGroupTree:(id)arg1;
- (BOOL)_revealReferencesInGroupTree:(id)arg1;
- (void)renameItem:(id)arg1;
- (void)ungroupItems:(id)arg1;
- (void)groupItems:(id)arg1;
- (void)newGroup:(id)arg1;
- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (id)selectedProjectItemPaths;
- (void)insertNewBookmark:(id)arg1;
- (void)setSelectedProjectItems:(id)arg1;
- (long long)_rowForItemAfterTryingToExpose:(id)arg1;
- (id)selectedProjectItems;
- (void)_userBookmarkGroupDidChange:(id)arg1;
- (void)update;
- (void)_itemsChangedInProject:(id)arg1;
- (void)becomeActive;
- (id)slideOutTabIconImage;
- (void)viewDidLoad;
- (void)projectDocumentWillChange:(id)arg1;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;

@end
