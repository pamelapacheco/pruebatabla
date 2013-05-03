//
//  MasterViewController.h
//  pruebatabla
//
//  Created by Lion User on 02/10/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Personas.h"

@class DetailViewController;

@interface MasterViewController : UIViewController <UITableViewDataSource, UITableViewDelegate,NSFetchedResultsControllerDelegate,UITextFieldDelegate>{
     int selectedTextField;
    Personas *nuevoFavorito;
}
@property (strong, nonatomic) DetailViewController *detailViewController;
@property (retain, nonatomic) IBOutlet UITableView *tableView;
@property (retain, nonatomic) IBOutlet UITextField *tfNombre;

- (IBAction)bfav:(id)sender;

//metodos necesarios para la base de datos
@property(retain,nonatomic)NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *addingManagedObjectContext;
@end
