// findAuthorInLibrary
public book findAuthorInLibrary(boolean author){
        for (int i = 0; i < library.length ;i ++) {
            if(library[i].getAuthor().equals(Author)) {
                return true;
            }            
        }
        return false;
    }
