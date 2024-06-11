/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_945.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4725(t_small_parse_table_array *v)
{
	v->a[94500] = actions(3872);
	v->a[94501] = 1;
	v->a[94502] = anon_sym_DQUOTE;
	v->a[94503] = state(1987);
	v->a[94504] = 1;
	v->a[94505] = aux_sym_string_repeat1;
	v->a[94506] = state(2107);
	v->a[94507] = 4;
	v->a[94508] = sym_arithmetic_expansion;
	v->a[94509] = sym_simple_expansion;
	v->a[94510] = sym_expansion;
	v->a[94511] = sym_command_substitution;
	v->a[94512] = 10;
	v->a[94513] = actions(3);
	v->a[94514] = 1;
	v->a[94515] = sym_comment;
	v->a[94516] = actions(3856);
	v->a[94517] = 1;
	v->a[94518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94519] = actions(3862);
	small_parse_table_4726(v);
}

void	small_parse_table_4726(t_small_parse_table_array *v)
{
	v->a[94520] = 1;
	v->a[94521] = sym_string_content;
	v->a[94522] = actions(3864);
	v->a[94523] = 1;
	v->a[94524] = anon_sym_DOLLAR_LBRACE;
	v->a[94525] = actions(3866);
	v->a[94526] = 1;
	v->a[94527] = anon_sym_DOLLAR_LPAREN;
	v->a[94528] = actions(3868);
	v->a[94529] = 1;
	v->a[94530] = anon_sym_BQUOTE;
	v->a[94531] = actions(3874);
	v->a[94532] = 1;
	v->a[94533] = anon_sym_DOLLAR;
	v->a[94534] = actions(3876);
	v->a[94535] = 1;
	v->a[94536] = anon_sym_DQUOTE;
	v->a[94537] = state(2043);
	v->a[94538] = 1;
	v->a[94539] = aux_sym_string_repeat1;
	small_parse_table_4727(v);
}

void	small_parse_table_4727(t_small_parse_table_array *v)
{
	v->a[94540] = state(2107);
	v->a[94541] = 4;
	v->a[94542] = sym_arithmetic_expansion;
	v->a[94543] = sym_simple_expansion;
	v->a[94544] = sym_expansion;
	v->a[94545] = sym_command_substitution;
	v->a[94546] = 4;
	v->a[94547] = actions(3);
	v->a[94548] = 1;
	v->a[94549] = sym_comment;
	v->a[94550] = actions(2524);
	v->a[94551] = 1;
	v->a[94552] = sym_variable_name;
	v->a[94553] = actions(2522);
	v->a[94554] = 2;
	v->a[94555] = aux_sym__simple_variable_name_token1;
	v->a[94556] = aux_sym__multiline_variable_name_token1;
	v->a[94557] = actions(2520);
	v->a[94558] = 9;
	v->a[94559] = anon_sym_BANG;
	small_parse_table_4728(v);
}

void	small_parse_table_4728(t_small_parse_table_array *v)
{
	v->a[94560] = anon_sym_DASH;
	v->a[94561] = anon_sym_STAR;
	v->a[94562] = anon_sym_QMARK;
	v->a[94563] = anon_sym_DOLLAR;
	v->a[94564] = anon_sym_POUND;
	v->a[94565] = anon_sym_AT;
	v->a[94566] = anon_sym_0;
	v->a[94567] = anon_sym__;
	v->a[94568] = 10;
	v->a[94569] = actions(3);
	v->a[94570] = 1;
	v->a[94571] = sym_comment;
	v->a[94572] = actions(3856);
	v->a[94573] = 1;
	v->a[94574] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94575] = actions(3862);
	v->a[94576] = 1;
	v->a[94577] = sym_string_content;
	v->a[94578] = actions(3864);
	v->a[94579] = 1;
	small_parse_table_4729(v);
}

void	small_parse_table_4729(t_small_parse_table_array *v)
{
	v->a[94580] = anon_sym_DOLLAR_LBRACE;
	v->a[94581] = actions(3866);
	v->a[94582] = 1;
	v->a[94583] = anon_sym_DOLLAR_LPAREN;
	v->a[94584] = actions(3868);
	v->a[94585] = 1;
	v->a[94586] = anon_sym_BQUOTE;
	v->a[94587] = actions(3878);
	v->a[94588] = 1;
	v->a[94589] = anon_sym_DOLLAR;
	v->a[94590] = actions(3880);
	v->a[94591] = 1;
	v->a[94592] = anon_sym_DQUOTE;
	v->a[94593] = state(1960);
	v->a[94594] = 1;
	v->a[94595] = aux_sym_string_repeat1;
	v->a[94596] = state(2107);
	v->a[94597] = 4;
	v->a[94598] = sym_arithmetic_expansion;
	v->a[94599] = sym_simple_expansion;
	small_parse_table_4730(v);
}

/* EOF small_parse_table_945.c */
