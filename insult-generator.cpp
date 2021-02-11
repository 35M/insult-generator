#include <iostream>
#include <windows.h>
#include <string> 
#include <vector>
#include <ctime>

using namespace std;

int main() {
    string name;
    char input;
    
    vector<string> adjectives = {"motherfucking", "stinky", "cocksucking", "pusillanimous", "bumbling", "misshapen", "dysfunctional", "decrepit", "infantile", "childish", "pungent", "shitty",
    "gross", "unhygenic", "horrible", "cum-guzzling", "vomit-inducing", "nauseating", "greasy", "middle-aged", "disease-carrying", "annoying", "oblivious", "loud-mouthed", "aging", "decomposing", 
    "maggot infested", "caffeine-addicted", "blue-haired", "flamboyant", "coke-addicted", "toe-sucking", "gay ass", "extraterrestrial", "cheeto-dusted", "expired", "subhuman", "under-baked", "superficial", 
    "deceased", "discount", "off-brand", "soul-sucking", "untalented", "slithering", "fermented", "mentally ill", "clinically depressed"};

    vector<string> nouns = {"dumpster fire of a human being", "sewer rat", "walking man-hole cover", "bimbo", "cockslut", "wannabe tiktok star", "covid superspreader", "anti-masker", "anti-vaxxer", 
    "trump supporter", "swamp ogre", "sasquatch", "garden gnome", "blood-sucking mosquito", "gaslighter", "freshly sheared newborn sheep", "howler monkey", "failed kpop idol", "boomer", "terf", 
    "walking dead extra", "former disney star", "deflated caprisun", "ugly animal crossing villager", "faggot", "dyke", "chink", "oriental", "twitch streamer","blacklisted day-care employee", "D-list celebrity", 
    "paint-thinner junkie", "slab of wet concrete", "scooby-doo villain", "rejected D.C hero", "discord mod", "zero sub minecraft youtuber", "soundcloud rapper", "reddit user", "instagram influencer", 
    "failed abortion", "Ed Sheeran lookalike", "theater kid", "ex-STEM kid", "crybaby"};

    vector<string> descriptions = {"shits their pants", "drinks their own bathwater", "collects fingernail clippings", "has every Britney Spears album on vinyl", "gets ghosted by every therapist", 
    "thinks they're the main character", "hasn't eaten a vegetable since 2009", "probably has a bible verse in their instagram bio", "thinks mental illness is a personality trait", 
    "has spent more money on furry commissions than on their education", "would be patient zero in a zombie apocalypse", "calls blonde white boys 'golden retreivers'", "is bisexual but would never date a girl", 
    "looks like they have irritable bowel syndrome", "probably has overly-saturated urine", "would pimp out their closest friends for 1 McChicken sandwich", "was caught storming the capital", "uses 8-in-1 shampoo", 
    "needs to be admitted into the psych ward", "definitely wouldn't be invited to their high school reunion", "peaked in middle school", "probably had a twenty-one pilots phase", 
    "ran a Lana Del Rey tumblr blog in 2014", "looks like they still qualify for a children's discount at Dennys", "thinks they're capable of original thought", 
    "isn't actually the funny friend that they think they are", "dresses like a 12-year-old boy"};

    int index;

    cout << "Please enter your first name: " << endl;
    cin >> name;
    cout << endl;

    do {
        srand(time(0));
        index = (rand() % adjectives.size());
        string word = adjectives.at(index);

        cout << name << " is ";
        if (word.at(0) == 'a' || word.at(0) == 'e' || word.at(0) == 'i' || word.at(0) == 'o' || word.at(0) == 'u') {
            cout << "an ";
        }
        else {
            cout << "a ";
        }

        cout << word << ", ";
        adjectives.erase(adjectives.begin() + index);
        index = (rand() % adjectives.size());
        cout << adjectives.at(index) << " ";
        adjectives.erase(adjectives.begin() + index);
        index = (rand() % nouns.size());
        cout << nouns.at(index);
        nouns.erase(nouns.begin() + index);
        index = (rand() % descriptions.size());
        cout << " who " << descriptions.at(index) << "." << endl;
        descriptions.erase(descriptions.begin() + index);

        cout << endl;
        Sleep(1000);
        cout << "Do you want another insult?" << endl;
        Sleep(800);
        cout << "Type 'y' for yes, and 'n' for no." << endl;
        cin >> input;
        cout << endl;

        while (input != 'y' && input != 'n') {
            cout << "Sorry, let's try again." << endl;
            Sleep(800);
            cout << "Do you want another insult?" << endl;
            Sleep(800);
            cout << "Type 'y' for yes, and 'n' for no." << endl;
            cin >> input;
            cout << endl;
        }
    } while (input == 'y');
}
