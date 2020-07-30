import subprocess

def checkOut(path, pv, ev):
    print path
    path[0] += " "+pv
  #   try:
	code = subprocess.Popen(path, stdout=subprocess.PIPE)

    stdout, stderr = code.communicate();

    if (stderr):
        return (0, stderr)

    stdout = stdout.replace("\n", "")

    if stdout == ev:
    	print "[ok]"
    	
  #   except Exception as e:
  #   	raise
  #   else:
  #   	pass
  #   finally:
  #   	pass
    
