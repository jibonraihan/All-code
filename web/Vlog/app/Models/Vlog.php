<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Model;
use Illuminate\Database\Eloquent\Factories\Hasfactory;

class Vlog extends Model
{
    use Hasfactory;
    protected $fillable = ['name'];
}
