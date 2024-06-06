/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_887.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4435(t_small_parse_table_array *v)
{
	v->a[88700] = 1;
	v->a[88701] = anon_sym_TILDE;
	v->a[88702] = actions(4594);
	v->a[88703] = 1;
	v->a[88704] = anon_sym_DOLLAR;
	v->a[88705] = actions(4596);
	v->a[88706] = 1;
	v->a[88707] = anon_sym_DQUOTE;
	v->a[88708] = actions(4598);
	v->a[88709] = 1;
	v->a[88710] = aux_sym_number_token1;
	v->a[88711] = actions(4600);
	v->a[88712] = 1;
	v->a[88713] = aux_sym_number_token2;
	v->a[88714] = actions(4602);
	v->a[88715] = 1;
	v->a[88716] = anon_sym_DOLLAR_LBRACE;
	v->a[88717] = actions(4604);
	v->a[88718] = 1;
	v->a[88719] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4436(v);
}

void	small_parse_table_4436(t_small_parse_table_array *v)
{
	v->a[88720] = actions(4606);
	v->a[88721] = 1;
	v->a[88722] = anon_sym_BQUOTE;
	v->a[88723] = actions(4608);
	v->a[88724] = 1;
	v->a[88725] = anon_sym_DOLLAR_BQUOTE;
	v->a[88726] = actions(4899);
	v->a[88727] = 1;
	v->a[88728] = aux_sym__simple_variable_name_token1;
	v->a[88729] = actions(4901);
	v->a[88730] = 1;
	v->a[88731] = sym_variable_name;
	v->a[88732] = state(1476);
	v->a[88733] = 1;
	v->a[88734] = sym__arithmetic_postfix_expression;
	v->a[88735] = state(1478);
	v->a[88736] = 1;
	v->a[88737] = sym__arithmetic_unary_expression;
	v->a[88738] = state(1490);
	v->a[88739] = 1;
	small_parse_table_4437(v);
}

void	small_parse_table_4437(t_small_parse_table_array *v)
{
	v->a[88740] = sym__arithmetic_ternary_expression;
	v->a[88741] = state(1511);
	v->a[88742] = 1;
	v->a[88743] = sym__arithmetic_binary_expression;
	v->a[88744] = actions(4588);
	v->a[88745] = 2;
	v->a[88746] = anon_sym_PLUS_PLUS;
	v->a[88747] = anon_sym_DASH_DASH;
	v->a[88748] = actions(4590);
	v->a[88749] = 2;
	v->a[88750] = anon_sym_DASH2;
	v->a[88751] = anon_sym_PLUS2;
	v->a[88752] = state(1419);
	v->a[88753] = 8;
	v->a[88754] = sym__arithmetic_expression;
	v->a[88755] = sym__arithmetic_literal;
	v->a[88756] = sym__arithmetic_parenthesized_expression;
	v->a[88757] = sym_string;
	v->a[88758] = sym_number;
	v->a[88759] = sym_simple_expansion;
	small_parse_table_4438(v);
}

void	small_parse_table_4438(t_small_parse_table_array *v)
{
	v->a[88760] = sym_expansion;
	v->a[88761] = sym_command_substitution;
	v->a[88762] = 21;
	v->a[88763] = actions(57);
	v->a[88764] = 1;
	v->a[88765] = sym_comment;
	v->a[88766] = actions(4584);
	v->a[88767] = 1;
	v->a[88768] = anon_sym_LPAREN;
	v->a[88769] = actions(4586);
	v->a[88770] = 1;
	v->a[88771] = anon_sym_BANG;
	v->a[88772] = actions(4592);
	v->a[88773] = 1;
	v->a[88774] = anon_sym_TILDE;
	v->a[88775] = actions(4594);
	v->a[88776] = 1;
	v->a[88777] = anon_sym_DOLLAR;
	v->a[88778] = actions(4596);
	v->a[88779] = 1;
	small_parse_table_4439(v);
}

void	small_parse_table_4439(t_small_parse_table_array *v)
{
	v->a[88780] = anon_sym_DQUOTE;
	v->a[88781] = actions(4598);
	v->a[88782] = 1;
	v->a[88783] = aux_sym_number_token1;
	v->a[88784] = actions(4600);
	v->a[88785] = 1;
	v->a[88786] = aux_sym_number_token2;
	v->a[88787] = actions(4602);
	v->a[88788] = 1;
	v->a[88789] = anon_sym_DOLLAR_LBRACE;
	v->a[88790] = actions(4604);
	v->a[88791] = 1;
	v->a[88792] = anon_sym_DOLLAR_LPAREN;
	v->a[88793] = actions(4606);
	v->a[88794] = 1;
	v->a[88795] = anon_sym_BQUOTE;
	v->a[88796] = actions(4608);
	v->a[88797] = 1;
	v->a[88798] = anon_sym_DOLLAR_BQUOTE;
	v->a[88799] = actions(4903);
	small_parse_table_4440(v);
}

/* EOF small_parse_table_887.c */
