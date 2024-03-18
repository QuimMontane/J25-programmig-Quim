// findStartingAuthor
public boolean findStartingAuthor(string author){
        for (int i = 0; i < library.length ;i ++) {
            if(library[i].getAuthor().startsWith(author)) {
                return true;
            }            
        }
        return false;
    }
