"""
/*______________________________________________________________________
||--------------------------------------------------------------------||
||                                                                    ||
|| *** In the name of Allah, the Most Gracious, the Most Merciful.*** ||
||                                                                    ||
||--------------------------------------------------------------------||
||--------------------------------------------------------------------||
|| --> Author     :     Abu Bakar Siddique Arman (#arman_bhaai)       ||
|| --> Email      :     arman.bhaai@gmail.com                         ||
|| --> Portfolio  :     arman-bhaai.github.io                         ||
|| --> LinkedIn   :     linkedin.com/in/abubakar-arman                ||
|| --> Facebook   :     fb.me/arman.bhaai                             ||
|| --> GitHub     :     github.com/arman-bhaai                        ||
|| --> StopStalk  :     stopstalk.com/user/profile/arman_bhaai        ||
|| --> CodeForces :     codeforces.com/profile/arman_bhaai            ||
|| --> CodeChef   :     codechef.com/users/arman_bhaai                ||
|| --> HackerRank :     hackerrank.com/arman_bhaai                    ||
||--------------------------------------------------------------------||
||--------------------------------------------------------------------||
|| --> Creation Date  : 2022-09-26                                    ||
|| --> Last Modified  : 2022-09-26                                    ||
|| --> Dev Language   : Python 3.9.10                                 ||
|| --> Dev OS         : Windows 10 (Pro)                              ||
||--------------------------------------------------------------------||
||--------------------------------------------------------------------*/

// I believe in OpenSource. So, any of my code snippets are Copyright-Free.
// <3 Happy Coding <3
"""

########################## Import Packages ##############################!IMPAC!
import os
import shutil
import argparse
import logging


def run_cli():
    ############### Logger Configs ###############
    logging.basicConfig(
        format='%(levelname)s: %(message)s', level=logging.INFO)
    # logging.basicConfig(format='%(levelname)s: %(message)s', filename='debug.log', level=logging.DEBUG, filemode='w')

    # aliases for logging
    def dbg(msg):
        logging.info(msg)

    def inf(msg):
        logging.info(msg)

    def err(msg):
        logging.error(msg)

    ############### CLI Configs ###############
    ap_desc = """\
    sample usage: python cp_template_gen.py -src template1.cpp -dst Codes -amt 6
    """
    aparser = argparse.ArgumentParser(description=ap_desc)
    aparser.add_argument(
        '-src', '--source_template_path',
        default='template1.cpp',
        help=r'eg: C:\Users\template.cpp | template.cpp'
    )
    aparser.add_argument(
        '-dst', '--destination_dir',
        default='Codes',
        help=r'eg: Codes | C:\Users\Codes'
    )
    aparser.add_argument(
        '-amt', '--amount',
        default='6',
        help='eg: 6'
    )
    args = aparser.parse_args()

    App(args.source_template_path, args.destination_dir, int(args.amount))


############### Main App Class ###############
class App:
    def __init__(self, source_file="template1.cpp", dest_dir="Codes", amount=6):
        self.source_file = source_file
        self.dest_dir = dest_dir
        self.amount = amount
        self.ext = os.path.splitext(self.source_file)[1]
        self.names = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        self.run()

    def run(self):
        os.mkdir(self.dest_dir)

        for name in self.names[:self.amount]:
            filename = self.dest_dir + "\\" + name + self.ext
            print(f"Creating : {filename}")
            shutil.copy(self.source_file, filename)

        print("\nTemplate creation succesful!")


if __name__ == "__main__":
    run_cli()
