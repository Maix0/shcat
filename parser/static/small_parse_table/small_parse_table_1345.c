/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1345.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6725(t_small_parse_table_array *v)
{
	v->a[134500] = state(3218);
	v->a[134501] = 4;
	v->a[134502] = sym_arithmetic_expansion;
	v->a[134503] = sym_simple_expansion;
	v->a[134504] = sym_expansion;
	v->a[134505] = sym_command_substitution;
	v->a[134506] = 11;
	v->a[134507] = actions(3);
	v->a[134508] = 1;
	v->a[134509] = sym_comment;
	v->a[134510] = actions(7760);
	v->a[134511] = 1;
	v->a[134512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[134513] = actions(7766);
	v->a[134514] = 1;
	v->a[134515] = sym_string_content;
	v->a[134516] = actions(7768);
	v->a[134517] = 1;
	v->a[134518] = anon_sym_DOLLAR_LBRACE;
	v->a[134519] = actions(7770);
	small_parse_table_6726(v);
}

void	small_parse_table_6726(t_small_parse_table_array *v)
{
	v->a[134520] = 1;
	v->a[134521] = anon_sym_DOLLAR_LPAREN;
	v->a[134522] = actions(7772);
	v->a[134523] = 1;
	v->a[134524] = anon_sym_BQUOTE;
	v->a[134525] = actions(7774);
	v->a[134526] = 1;
	v->a[134527] = anon_sym_DOLLAR_BQUOTE;
	v->a[134528] = actions(7776);
	v->a[134529] = 1;
	v->a[134530] = anon_sym_DOLLAR;
	v->a[134531] = actions(7778);
	v->a[134532] = 1;
	v->a[134533] = anon_sym_DQUOTE;
	v->a[134534] = state(2994);
	v->a[134535] = 1;
	v->a[134536] = aux_sym_string_repeat1;
	v->a[134537] = state(3218);
	v->a[134538] = 4;
	v->a[134539] = sym_arithmetic_expansion;
	small_parse_table_6727(v);
}

void	small_parse_table_6727(t_small_parse_table_array *v)
{
	v->a[134540] = sym_simple_expansion;
	v->a[134541] = sym_expansion;
	v->a[134542] = sym_command_substitution;
	v->a[134543] = 11;
	v->a[134544] = actions(3);
	v->a[134545] = 1;
	v->a[134546] = sym_comment;
	v->a[134547] = actions(7760);
	v->a[134548] = 1;
	v->a[134549] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[134550] = actions(7766);
	v->a[134551] = 1;
	v->a[134552] = sym_string_content;
	v->a[134553] = actions(7768);
	v->a[134554] = 1;
	v->a[134555] = anon_sym_DOLLAR_LBRACE;
	v->a[134556] = actions(7770);
	v->a[134557] = 1;
	v->a[134558] = anon_sym_DOLLAR_LPAREN;
	v->a[134559] = actions(7772);
	small_parse_table_6728(v);
}

void	small_parse_table_6728(t_small_parse_table_array *v)
{
	v->a[134560] = 1;
	v->a[134561] = anon_sym_BQUOTE;
	v->a[134562] = actions(7774);
	v->a[134563] = 1;
	v->a[134564] = anon_sym_DOLLAR_BQUOTE;
	v->a[134565] = actions(7780);
	v->a[134566] = 1;
	v->a[134567] = anon_sym_DOLLAR;
	v->a[134568] = actions(7782);
	v->a[134569] = 1;
	v->a[134570] = anon_sym_DQUOTE;
	v->a[134571] = state(2999);
	v->a[134572] = 1;
	v->a[134573] = aux_sym_string_repeat1;
	v->a[134574] = state(3218);
	v->a[134575] = 4;
	v->a[134576] = sym_arithmetic_expansion;
	v->a[134577] = sym_simple_expansion;
	v->a[134578] = sym_expansion;
	v->a[134579] = sym_command_substitution;
	small_parse_table_6729(v);
}

void	small_parse_table_6729(t_small_parse_table_array *v)
{
	v->a[134580] = 7;
	v->a[134581] = actions(3);
	v->a[134582] = 1;
	v->a[134583] = sym_comment;
	v->a[134584] = actions(7754);
	v->a[134585] = 1;
	v->a[134586] = aux_sym__simple_variable_name_token1;
	v->a[134587] = actions(7758);
	v->a[134588] = 1;
	v->a[134589] = sym_variable_name;
	v->a[134590] = actions(7784);
	v->a[134591] = 1;
	v->a[134592] = anon_sym_RBRACE3;
	v->a[134593] = state(3706);
	v->a[134594] = 1;
	v->a[134595] = sym__expansion_body;
	v->a[134596] = actions(7756);
	v->a[134597] = 2;
	v->a[134598] = anon_sym_0;
	v->a[134599] = anon_sym__;
	small_parse_table_6730(v);
}

/* EOF small_parse_table_1345.c */
