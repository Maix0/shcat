/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_587.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2935(t_small_parse_table_array *v)
{
	v->a[58700] = anon_sym_BQUOTE;
	v->a[58701] = actions(2135);
	v->a[58702] = 1;
	v->a[58703] = sym_extglob_pattern;
	v->a[58704] = actions(2147);
	v->a[58705] = 1;
	v->a[58706] = anon_sym_esac;
	v->a[58707] = state(1156);
	v->a[58708] = 1;
	v->a[58709] = aux_sym_case_statement_repeat1;
	v->a[58710] = state(1786);
	v->a[58711] = 1;
	v->a[58712] = sym_case_item;
	v->a[58713] = state(2247);
	v->a[58714] = 1;
	v->a[58715] = sym__case_item_last;
	v->a[58716] = actions(2111);
	v->a[58717] = 2;
	v->a[58718] = sym_raw_string;
	v->a[58719] = sym_word;
	small_parse_table_2936(v);
}

void	small_parse_table_2936(t_small_parse_table_array *v)
{
	v->a[58720] = state(2016);
	v->a[58721] = 2;
	v->a[58722] = sym_concatenation;
	v->a[58723] = sym__extglob_blob;
	v->a[58724] = actions(2149);
	v->a[58725] = 4;
	v->a[58726] = anon_sym_SEMI_SEMI;
	v->a[58727] = aux_sym_heredoc_redirect_token1;
	v->a[58728] = anon_sym_AMP;
	v->a[58729] = anon_sym_SEMI;
	v->a[58730] = state(1896);
	v->a[58731] = 6;
	v->a[58732] = sym_arithmetic_expansion;
	v->a[58733] = sym_string;
	v->a[58734] = sym_number;
	v->a[58735] = sym_simple_expansion;
	v->a[58736] = sym_expansion;
	v->a[58737] = sym_command_substitution;
	v->a[58738] = 17;
	v->a[58739] = actions(1404);
	small_parse_table_2937(v);
}

void	small_parse_table_2937(t_small_parse_table_array *v)
{
	v->a[58740] = 1;
	v->a[58741] = sym_comment;
	v->a[58742] = actions(1979);
	v->a[58743] = 1;
	v->a[58744] = anon_sym_LPAREN;
	v->a[58745] = actions(1981);
	v->a[58746] = 1;
	v->a[58747] = anon_sym_BANG;
	v->a[58748] = actions(1989);
	v->a[58749] = 1;
	v->a[58750] = anon_sym_TILDE;
	v->a[58751] = actions(1991);
	v->a[58752] = 1;
	v->a[58753] = anon_sym_DOLLAR;
	v->a[58754] = actions(1993);
	v->a[58755] = 1;
	v->a[58756] = anon_sym_DQUOTE;
	v->a[58757] = actions(1995);
	v->a[58758] = 1;
	v->a[58759] = aux_sym_number_token1;
	small_parse_table_2938(v);
}

void	small_parse_table_2938(t_small_parse_table_array *v)
{
	v->a[58760] = actions(1997);
	v->a[58761] = 1;
	v->a[58762] = aux_sym_number_token2;
	v->a[58763] = actions(1999);
	v->a[58764] = 1;
	v->a[58765] = anon_sym_DOLLAR_LBRACE;
	v->a[58766] = actions(2001);
	v->a[58767] = 1;
	v->a[58768] = anon_sym_DOLLAR_LPAREN;
	v->a[58769] = actions(2003);
	v->a[58770] = 1;
	v->a[58771] = anon_sym_BQUOTE;
	v->a[58772] = actions(2005);
	v->a[58773] = 1;
	v->a[58774] = aux_sym__simple_variable_name_token1;
	v->a[58775] = actions(2007);
	v->a[58776] = 1;
	v->a[58777] = sym_variable_name;
	v->a[58778] = actions(1985);
	v->a[58779] = 2;
	small_parse_table_2939(v);
}

void	small_parse_table_2939(t_small_parse_table_array *v)
{
	v->a[58780] = anon_sym_PLUS_PLUS;
	v->a[58781] = anon_sym_DASH_DASH;
	v->a[58782] = actions(1987);
	v->a[58783] = 2;
	v->a[58784] = anon_sym_DASH2;
	v->a[58785] = anon_sym_PLUS2;
	v->a[58786] = state(530);
	v->a[58787] = 4;
	v->a[58788] = sym_string;
	v->a[58789] = sym_number;
	v->a[58790] = sym_simple_expansion;
	v->a[58791] = sym_expansion;
	v->a[58792] = state(412);
	v->a[58793] = 8;
	v->a[58794] = sym__arithmetic_expression;
	v->a[58795] = sym_arithmetic_literal;
	v->a[58796] = sym_arithmetic_binary_expression;
	v->a[58797] = sym_arithmetic_ternary_expression;
	v->a[58798] = sym_arithmetic_unary_expression;
	v->a[58799] = sym_arithmetic_postfix_expression;
	small_parse_table_2940(v);
}

/* EOF small_parse_table_587.c */
