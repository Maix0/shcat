/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_660.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3300(t_small_parse_table_array *v)
{
	v->a[66000] = state(2300);
	v->a[66001] = 1;
	v->a[66002] = sym__case_item_last;
	v->a[66003] = state(2224);
	v->a[66004] = 2;
	v->a[66005] = sym_concatenation;
	v->a[66006] = sym__extglob_blob;
	v->a[66007] = actions(1955);
	v->a[66008] = 3;
	v->a[66009] = sym_raw_string;
	v->a[66010] = sym_number;
	v->a[66011] = sym_word;
	v->a[66012] = actions(2033);
	v->a[66013] = 4;
	v->a[66014] = anon_sym_SEMI_SEMI;
	v->a[66015] = aux_sym_heredoc_redirect_token1;
	v->a[66016] = anon_sym_AMP;
	v->a[66017] = anon_sym_SEMI;
	v->a[66018] = state(2157);
	v->a[66019] = 5;
	small_parse_table_3301(v);
}

void	small_parse_table_3301(t_small_parse_table_array *v)
{
	v->a[66020] = sym_arithmetic_expansion;
	v->a[66021] = sym_string;
	v->a[66022] = sym_simple_expansion;
	v->a[66023] = sym_expansion;
	v->a[66024] = sym_command_substitution;
	v->a[66025] = 15;
	v->a[66026] = actions(1094);
	v->a[66027] = 1;
	v->a[66028] = sym_comment;
	v->a[66029] = actions(1869);
	v->a[66030] = 1;
	v->a[66031] = anon_sym_LPAREN;
	v->a[66032] = actions(1871);
	v->a[66033] = 1;
	v->a[66034] = anon_sym_BANG;
	v->a[66035] = actions(1879);
	v->a[66036] = 1;
	v->a[66037] = anon_sym_TILDE;
	v->a[66038] = actions(1881);
	v->a[66039] = 1;
	small_parse_table_3302(v);
}

void	small_parse_table_3302(t_small_parse_table_array *v)
{
	v->a[66040] = anon_sym_DOLLAR;
	v->a[66041] = actions(1883);
	v->a[66042] = 1;
	v->a[66043] = anon_sym_DQUOTE;
	v->a[66044] = actions(1887);
	v->a[66045] = 1;
	v->a[66046] = anon_sym_DOLLAR_LBRACE;
	v->a[66047] = actions(1889);
	v->a[66048] = 1;
	v->a[66049] = anon_sym_DOLLAR_LPAREN;
	v->a[66050] = actions(1891);
	v->a[66051] = 1;
	v->a[66052] = anon_sym_BQUOTE;
	v->a[66053] = actions(1893);
	v->a[66054] = 1;
	v->a[66055] = sym_variable_name;
	v->a[66056] = actions(1875);
	v->a[66057] = 2;
	v->a[66058] = anon_sym_PLUS_PLUS;
	v->a[66059] = anon_sym_DASH_DASH;
	small_parse_table_3303(v);
}

void	small_parse_table_3303(t_small_parse_table_array *v)
{
	v->a[66060] = actions(1877);
	v->a[66061] = 2;
	v->a[66062] = anon_sym_DASH2;
	v->a[66063] = anon_sym_PLUS2;
	v->a[66064] = actions(1885);
	v->a[66065] = 2;
	v->a[66066] = sym_number;
	v->a[66067] = aux_sym__simple_variable_name_token1;
	v->a[66068] = state(365);
	v->a[66069] = 3;
	v->a[66070] = sym_string;
	v->a[66071] = sym_simple_expansion;
	v->a[66072] = sym_expansion;
	v->a[66073] = state(387);
	v->a[66074] = 8;
	v->a[66075] = sym__arithmetic_expression;
	v->a[66076] = sym_arithmetic_literal;
	v->a[66077] = sym_arithmetic_binary_expression;
	v->a[66078] = sym_arithmetic_ternary_expression;
	v->a[66079] = sym_arithmetic_unary_expression;
	small_parse_table_3304(v);
}

void	small_parse_table_3304(t_small_parse_table_array *v)
{
	v->a[66080] = sym_arithmetic_postfix_expression;
	v->a[66081] = sym_arithmetic_parenthesized_expression;
	v->a[66082] = sym_command_substitution;
	v->a[66083] = 15;
	v->a[66084] = actions(1094);
	v->a[66085] = 1;
	v->a[66086] = sym_comment;
	v->a[66087] = actions(2003);
	v->a[66088] = 1;
	v->a[66089] = anon_sym_LPAREN;
	v->a[66090] = actions(2005);
	v->a[66091] = 1;
	v->a[66092] = anon_sym_BANG;
	v->a[66093] = actions(2011);
	v->a[66094] = 1;
	v->a[66095] = anon_sym_TILDE;
	v->a[66096] = actions(2013);
	v->a[66097] = 1;
	v->a[66098] = anon_sym_DOLLAR;
	v->a[66099] = actions(2015);
	small_parse_table_3305(v);
}

/* EOF small_parse_table_660.c */
