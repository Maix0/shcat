/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1727.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8635(t_small_parse_table_array *v)
{
	v->a[172700] = sym__concat;
	v->a[172701] = sym_test_operator;
	v->a[172702] = sym__brace_start;
	v->a[172703] = aux_sym_heredoc_redirect_token1;
	v->a[172704] = actions(1352);
	v->a[172705] = 31;
	v->a[172706] = anon_sym_LPAREN_LPAREN;
	v->a[172707] = anon_sym_PIPE_PIPE;
	v->a[172708] = anon_sym_AMP_AMP;
	v->a[172709] = anon_sym_LT;
	v->a[172710] = anon_sym_GT;
	v->a[172711] = anon_sym_GT_GT;
	v->a[172712] = anon_sym_AMP_GT;
	v->a[172713] = anon_sym_AMP_GT_GT;
	v->a[172714] = anon_sym_LT_AMP;
	v->a[172715] = anon_sym_GT_AMP;
	v->a[172716] = anon_sym_GT_PIPE;
	v->a[172717] = anon_sym_LT_AMP_DASH;
	v->a[172718] = anon_sym_GT_AMP_DASH;
	v->a[172719] = anon_sym_LT_LT_LT;
	small_parse_table_8636(v);
}

void	small_parse_table_8636(t_small_parse_table_array *v)
{
	v->a[172720] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[172721] = anon_sym_DOLLAR_LBRACK;
	v->a[172722] = aux_sym_concatenation_token1;
	v->a[172723] = anon_sym_DOLLAR;
	v->a[172724] = sym__special_character;
	v->a[172725] = anon_sym_DQUOTE;
	v->a[172726] = sym_raw_string;
	v->a[172727] = sym_ansi_c_string;
	v->a[172728] = aux_sym_number_token1;
	v->a[172729] = aux_sym_number_token2;
	v->a[172730] = anon_sym_DOLLAR_LBRACE;
	v->a[172731] = anon_sym_DOLLAR_LPAREN;
	v->a[172732] = anon_sym_BQUOTE;
	v->a[172733] = anon_sym_DOLLAR_BQUOTE;
	v->a[172734] = anon_sym_LT_LPAREN;
	v->a[172735] = anon_sym_GT_LPAREN;
	v->a[172736] = sym_word;
	v->a[172737] = 8;
	v->a[172738] = actions(3);
	v->a[172739] = 1;
	small_parse_table_8637(v);
}

void	small_parse_table_8637(t_small_parse_table_array *v)
{
	v->a[172740] = sym_comment;
	v->a[172741] = actions(7673);
	v->a[172742] = 1;
	v->a[172743] = anon_sym_DQUOTE;
	v->a[172744] = actions(7677);
	v->a[172745] = 1;
	v->a[172746] = sym_variable_name;
	v->a[172747] = state(4393);
	v->a[172748] = 1;
	v->a[172749] = sym_string;
	v->a[172750] = actions(1235);
	v->a[172751] = 2;
	v->a[172752] = sym_file_descriptor;
	v->a[172753] = ts_builtin_sym_end;
	v->a[172754] = actions(7675);
	v->a[172755] = 2;
	v->a[172756] = aux_sym__simple_variable_name_token1;
	v->a[172757] = aux_sym__multiline_variable_name_token1;
	v->a[172758] = actions(7671);
	v->a[172759] = 9;
	small_parse_table_8638(v);
}

void	small_parse_table_8638(t_small_parse_table_array *v)
{
	v->a[172760] = anon_sym_DASH;
	v->a[172761] = anon_sym_STAR;
	v->a[172762] = anon_sym_BANG;
	v->a[172763] = anon_sym_QMARK;
	v->a[172764] = anon_sym_DOLLAR;
	v->a[172765] = anon_sym_POUND;
	v->a[172766] = anon_sym_AT2;
	v->a[172767] = anon_sym_0;
	v->a[172768] = anon_sym__;
	v->a[172769] = actions(1227);
	v->a[172770] = 20;
	v->a[172771] = anon_sym_SEMI;
	v->a[172772] = anon_sym_PIPE_PIPE;
	v->a[172773] = anon_sym_AMP_AMP;
	v->a[172774] = anon_sym_PIPE;
	v->a[172775] = anon_sym_AMP;
	v->a[172776] = anon_sym_LT;
	v->a[172777] = anon_sym_GT;
	v->a[172778] = anon_sym_LT_LT;
	v->a[172779] = anon_sym_GT_GT;
	small_parse_table_8639(v);
}

void	small_parse_table_8639(t_small_parse_table_array *v)
{
	v->a[172780] = anon_sym_SEMI_SEMI;
	v->a[172781] = anon_sym_PIPE_AMP;
	v->a[172782] = anon_sym_AMP_GT;
	v->a[172783] = anon_sym_AMP_GT_GT;
	v->a[172784] = anon_sym_LT_AMP;
	v->a[172785] = anon_sym_GT_AMP;
	v->a[172786] = anon_sym_GT_PIPE;
	v->a[172787] = anon_sym_LT_AMP_DASH;
	v->a[172788] = anon_sym_GT_AMP_DASH;
	v->a[172789] = anon_sym_LT_LT_DASH;
	v->a[172790] = aux_sym_heredoc_redirect_token1;
	v->a[172791] = 3;
	v->a[172792] = actions(71);
	v->a[172793] = 1;
	v->a[172794] = sym_comment;
	v->a[172795] = actions(6820);
	v->a[172796] = 14;
	v->a[172797] = anon_sym_EQ;
	v->a[172798] = anon_sym_PIPE;
	v->a[172799] = anon_sym_CARET;
	small_parse_table_8640(v);
}

/* EOF small_parse_table_1727.c */
