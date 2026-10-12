# Pseudo code de mon programme de nombres premiers


2) Variables du programme :
    - Nombre limite minimum (limiteMin)
    - Nombre limite maximum (limiteMax)
    - Caractère pour recommencer (recommencer)
    - Nombre de nombres premiers affichés par colonne (nbCol)
    - Nombre limite entré par l'utilisateur (nbUtilisateurLimite)
    - Réponse de l'utilisateur pour recommencer (recommencerUtilisateur)
    - Compteur de nombres affichés, pour la mise en page des nombres premiers (compteurAffichage)
    - Indicateur booléen de nombre premier (premier)

3) Déroulement du programme
- 3.0) DÉBUT de la boucle principale
    - Initialiser compteurAffichage à 0

- 3.1) INPUT Nombre limite de départ
    - Nombre compris entre limiteMin et limiteMax ?
        - Si non, -> 3.1
        - Si oui, -> 3.2
- 3.2) OUTPUT "Voici la liste des nombres premiers :"
  BOUCLE du nombre de départ (2) au nombre entré par l'utilisateur
    - Si le nombre est premier, PRINT dans la liste des nombres premiers
        - Incrémenter compteurAffichage
        - Si compteurAffichage est un multiple de 5
            - Retour à la ligne

- 3.3) INPUT pour recommencer le programme
    - OUTPUT "Voulez-vous recommencer ? [O/N]"
    - Réponse utilisateur = 'O' ?
        - Si oui, -> 3.0 (recommence le programme) 
        - Si non -> 3.4

- 3.4) OUTPUT "Fin du programme"