/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_187.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_935(t_small_parse_table_array *v)
{
	v->a[18700] = actions(1727);
	v->a[18701] = 1;
	v->a[18702] = sym_variable_name;
	v->a[18703] = actions(1725);
	v->a[18704] = 2;
	v->a[18705] = aux_sym__simple_variable_name_token1;
	v->a[18706] = aux_sym__multiline_variable_name_token1;
	v->a[18707] = actions(828);
	v->a[18708] = 3;
	v->a[18709] = sym_file_descriptor;
	v->a[18710] = sym_test_operator;
	v->a[18711] = sym__brace_start;
	v->a[18712] = actions(1723);
	v->a[18713] = 9;
	v->a[18714] = anon_sym_BANG;
	v->a[18715] = anon_sym_DASH;
	v->a[18716] = anon_sym_STAR;
	v->a[18717] = anon_sym_QMARK;
	v->a[18718] = anon_sym_DOLLAR;
	v->a[18719] = anon_sym_POUND;
	small_parse_table_936(v);
}

void	small_parse_table_936(t_small_parse_table_array *v)
{
	v->a[18720] = anon_sym_AT;
	v->a[18721] = anon_sym_0;
	v->a[18722] = anon_sym__;
	v->a[18723] = actions(826);
	v->a[18724] = 28;
	v->a[18725] = anon_sym_PIPE;
	v->a[18726] = anon_sym_PIPE_AMP;
	v->a[18727] = anon_sym_AMP_AMP;
	v->a[18728] = anon_sym_PIPE_PIPE;
	v->a[18729] = anon_sym_LT;
	v->a[18730] = anon_sym_GT;
	v->a[18731] = anon_sym_GT_GT;
	v->a[18732] = anon_sym_AMP_GT;
	v->a[18733] = anon_sym_AMP_GT_GT;
	v->a[18734] = anon_sym_LT_AMP;
	v->a[18735] = anon_sym_GT_AMP;
	v->a[18736] = anon_sym_GT_PIPE;
	v->a[18737] = anon_sym_LT_AMP_DASH;
	v->a[18738] = anon_sym_GT_AMP_DASH;
	v->a[18739] = anon_sym_LT_LT;
	small_parse_table_937(v);
}

void	small_parse_table_937(t_small_parse_table_array *v)
{
	v->a[18740] = anon_sym_LT_LT_DASH;
	v->a[18741] = aux_sym_heredoc_redirect_token1;
	v->a[18742] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18743] = sym__special_character;
	v->a[18744] = anon_sym_DQUOTE;
	v->a[18745] = sym_raw_string;
	v->a[18746] = aux_sym_number_token1;
	v->a[18747] = aux_sym_number_token2;
	v->a[18748] = anon_sym_DOLLAR_LBRACE;
	v->a[18749] = anon_sym_DOLLAR_LPAREN;
	v->a[18750] = anon_sym_BQUOTE;
	v->a[18751] = anon_sym_DOLLAR_BQUOTE;
	v->a[18752] = sym_word;
	v->a[18753] = 3;
	v->a[18754] = actions(57);
	v->a[18755] = 1;
	v->a[18756] = sym_comment;
	v->a[18757] = actions(1691);
	v->a[18758] = 17;
	v->a[18759] = sym_file_descriptor;
	small_parse_table_938(v);
}

void	small_parse_table_938(t_small_parse_table_array *v)
{
	v->a[18760] = sym_variable_name;
	v->a[18761] = sym_test_operator;
	v->a[18762] = sym__brace_start;
	v->a[18763] = anon_sym_LPAREN;
	v->a[18764] = anon_sym_LBRACE;
	v->a[18765] = anon_sym_GT_GT;
	v->a[18766] = anon_sym_AMP_GT_GT;
	v->a[18767] = anon_sym_GT_PIPE;
	v->a[18768] = anon_sym_LT_AMP_DASH;
	v->a[18769] = anon_sym_GT_AMP_DASH;
	v->a[18770] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18771] = anon_sym_DQUOTE;
	v->a[18772] = sym_raw_string;
	v->a[18773] = anon_sym_DOLLAR_LBRACE;
	v->a[18774] = anon_sym_BQUOTE;
	v->a[18775] = anon_sym_DOLLAR_BQUOTE;
	v->a[18776] = actions(1689);
	v->a[18777] = 26;
	v->a[18778] = anon_sym_for;
	v->a[18779] = anon_sym_select;
	small_parse_table_939(v);
}

void	small_parse_table_939(t_small_parse_table_array *v)
{
	v->a[18780] = anon_sym_while;
	v->a[18781] = anon_sym_until;
	v->a[18782] = anon_sym_if;
	v->a[18783] = anon_sym_case;
	v->a[18784] = anon_sym_function;
	v->a[18785] = anon_sym_BANG;
	v->a[18786] = anon_sym_declare;
	v->a[18787] = anon_sym_typeset;
	v->a[18788] = anon_sym_export;
	v->a[18789] = anon_sym_readonly;
	v->a[18790] = anon_sym_local;
	v->a[18791] = anon_sym_unset;
	v->a[18792] = anon_sym_unsetenv;
	v->a[18793] = anon_sym_LT;
	v->a[18794] = anon_sym_GT;
	v->a[18795] = anon_sym_AMP_GT;
	v->a[18796] = anon_sym_LT_AMP;
	v->a[18797] = anon_sym_GT_AMP;
	v->a[18798] = anon_sym_DOLLAR;
	v->a[18799] = sym__special_character;
	small_parse_table_940(v);
}

/* EOF small_parse_table_187.c */
