import tkinter as tk
from tkinter import font as tkFont  # For font configuration
import random

class Team:
    def __init__(self, team):
        self.hp = 100  # Starting HP, can be changed
        self.resources = {'D': 0, 'E': 0, 'I': 0}
        self.position = None  # Starting position, will vary per team
        self.team_size = 4  # Starting team size, can be changed
        self.team = team

class Game:
    def setup_layout(self):
        self.grid_frame = GridFrame(self.master, self.size, self.grid_button_click, self.teams)
        self.grid_frame.pack(side='top', fill='both', expand=True)

        self.stats_frame = StatsFrame(self.master, self.teams)
        self.stats_frame.pack(side='bottom')

        self.update_stats()  # Call this method to update stats initially

    def grid_button_click(self, row, col):
        # Handle grid button click, move or attack
        pass

    def update_stats(self):
        self.stats_frame.update_stats(self.teams)

    def __init__(self, master, size=10):
        self.master = master
        self.size = size
        self.teams = [Team(team+1) for team in range(4)]
        self.teams[0].position = (0, 0)
        self.teams[1].position = (0, size-1)
        self.teams[2].position = (size-1, 0)
        self.teams[3].position = (size-1, size-1)
        self.setup_layout()

class GridFrame(tk.Frame):
    def __init__(self, master, size, button_click_callback, teams):
        super().__init__(master)
        self.size = size
        self.button_click_callback = button_click_callback
        self.teams = teams
        self.create_grid()

    def create_grid(self):
        resources = ['Emerald', 'Diamond', 'HP', 'Iron']
        for row in range(self.size):
            for col in range(self.size):
                resource_text = ''
                if random.random() < 0.2:
                    resource_text = random.choice(resources)
                for team in self.teams:
                    if team.position == (row, col):
                        resource_text = str(team.team)
                button = tk.Button(self, text=resource_text, command=lambda r=row, c=col: self.button_click_callback(r, c))
                button.grid(row=row, column=col, sticky='nsew')
                self.grid_columnconfigure(col, weight=1)
                self.grid_rowconfigure(row, weight=1)

class StatsFrame(tk.Frame):
    def __init__(self, master, teams):
        super().__init__(master)
        self.teams = teams
        self.labels = {}
        self.stats_font = tkFont.Font(size=24)  # Define font size for the labels
        self.create_stats_labels()

    def create_stats_labels(self):
        for team in self.teams:
            stats_text = (f"Team {team.team}\n"
                          f"HP: {team.hp}\n"
                          f"Diamond: {team.resources['D']}, "
                          f"Emerald: {team.resources['E']}, "
                          f"Iron: {team.resources['I']}\n"
                          f"Team Size: {team.team_size}")
            label = tk.Label(self, text=stats_text, font=self.stats_font)
            label.pack(side='left')
            self.labels[team.team] = label

    def update_stats(self, teams):
        for team in teams:
            stats_text = (f"Team {team.team}\n"
                          f"HP: {team.hp}\n"
                          f"Diamond: {team.resources['D']}, "
                          f"Emerald: {team.resources['E']}, "
                          f"Iron: {team.resources['I']}\n"
                          f"Team Size: {team.team_size}")
            self.labels[team.team].config(text=stats_text)

# GUI setup
root = tk.Tk()
root.title("Grid Game")

game = Game(root)

root.mainloop()
