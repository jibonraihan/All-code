<?php

namespace App\Http\Controllers;
use App\Models\Vlog;
use App\Models\User;
use Illuminate\Http\Request;

class UserController extends Controller
{
    public function index(Request $request)
    {
       Vlog::create(
        [
            'name' => $request->name
        ]
       );
       return "Successfull";
    }
}
