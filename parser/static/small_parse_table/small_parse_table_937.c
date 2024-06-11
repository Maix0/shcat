/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_937.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4685(t_small_parse_table_array *v)
{
	v->a[93700] = 4;
	v->a[93701] = sym_string;
	v->a[93702] = sym_simple_expansion;
	v->a[93703] = sym_expansion;
	v->a[93704] = sym_command_substitution;
	v->a[93705] = 7;
	v->a[93706] = actions(3);
	v->a[93707] = 1;
	v->a[93708] = sym_comment;
	v->a[93709] = actions(3780);
	v->a[93710] = 1;
	v->a[93711] = aux_sym__simple_variable_name_token1;
	v->a[93712] = actions(3784);
	v->a[93713] = 1;
	v->a[93714] = sym_variable_name;
	v->a[93715] = actions(3808);
	v->a[93716] = 1;
	v->a[93717] = anon_sym_RBRACE;
	v->a[93718] = state(2306);
	v->a[93719] = 1;
	small_parse_table_4686(v);
}

void	small_parse_table_4686(t_small_parse_table_array *v)
{
	v->a[93720] = sym__expansion_body;
	v->a[93721] = actions(3782);
	v->a[93722] = 2;
	v->a[93723] = anon_sym_0;
	v->a[93724] = anon_sym__;
	v->a[93725] = actions(3778);
	v->a[93726] = 7;
	v->a[93727] = anon_sym_BANG;
	v->a[93728] = anon_sym_DASH;
	v->a[93729] = anon_sym_STAR;
	v->a[93730] = anon_sym_QMARK;
	v->a[93731] = anon_sym_DOLLAR;
	v->a[93732] = anon_sym_POUND;
	v->a[93733] = anon_sym_AT;
	v->a[93734] = 7;
	v->a[93735] = actions(3);
	v->a[93736] = 1;
	v->a[93737] = sym_comment;
	v->a[93738] = actions(3780);
	v->a[93739] = 1;
	small_parse_table_4687(v);
}

void	small_parse_table_4687(t_small_parse_table_array *v)
{
	v->a[93740] = aux_sym__simple_variable_name_token1;
	v->a[93741] = actions(3784);
	v->a[93742] = 1;
	v->a[93743] = sym_variable_name;
	v->a[93744] = actions(3810);
	v->a[93745] = 1;
	v->a[93746] = anon_sym_RBRACE;
	v->a[93747] = state(2433);
	v->a[93748] = 1;
	v->a[93749] = sym__expansion_body;
	v->a[93750] = actions(3782);
	v->a[93751] = 2;
	v->a[93752] = anon_sym_0;
	v->a[93753] = anon_sym__;
	v->a[93754] = actions(3778);
	v->a[93755] = 7;
	v->a[93756] = anon_sym_BANG;
	v->a[93757] = anon_sym_DASH;
	v->a[93758] = anon_sym_STAR;
	v->a[93759] = anon_sym_QMARK;
	small_parse_table_4688(v);
}

void	small_parse_table_4688(t_small_parse_table_array *v)
{
	v->a[93760] = anon_sym_DOLLAR;
	v->a[93761] = anon_sym_POUND;
	v->a[93762] = anon_sym_AT;
	v->a[93763] = 7;
	v->a[93764] = actions(3);
	v->a[93765] = 1;
	v->a[93766] = sym_comment;
	v->a[93767] = actions(3780);
	v->a[93768] = 1;
	v->a[93769] = aux_sym__simple_variable_name_token1;
	v->a[93770] = actions(3784);
	v->a[93771] = 1;
	v->a[93772] = sym_variable_name;
	v->a[93773] = actions(3812);
	v->a[93774] = 1;
	v->a[93775] = anon_sym_RBRACE;
	v->a[93776] = state(2441);
	v->a[93777] = 1;
	v->a[93778] = sym__expansion_body;
	v->a[93779] = actions(3782);
	small_parse_table_4689(v);
}

void	small_parse_table_4689(t_small_parse_table_array *v)
{
	v->a[93780] = 2;
	v->a[93781] = anon_sym_0;
	v->a[93782] = anon_sym__;
	v->a[93783] = actions(3778);
	v->a[93784] = 7;
	v->a[93785] = anon_sym_BANG;
	v->a[93786] = anon_sym_DASH;
	v->a[93787] = anon_sym_STAR;
	v->a[93788] = anon_sym_QMARK;
	v->a[93789] = anon_sym_DOLLAR;
	v->a[93790] = anon_sym_POUND;
	v->a[93791] = anon_sym_AT;
	v->a[93792] = 7;
	v->a[93793] = actions(3);
	v->a[93794] = 1;
	v->a[93795] = sym_comment;
	v->a[93796] = actions(3780);
	v->a[93797] = 1;
	v->a[93798] = aux_sym__simple_variable_name_token1;
	v->a[93799] = actions(3784);
	small_parse_table_4690(v);
}

/* EOF small_parse_table_937.c */
