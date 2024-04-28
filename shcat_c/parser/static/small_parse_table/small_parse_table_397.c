/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_397.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1985(t_small_parse_table_array *v)
{
	v->a[39700] = 41;
	v->a[39701] = anon_sym_LPAREN_LPAREN;
	v->a[39702] = anon_sym_SEMI;
	v->a[39703] = anon_sym_PIPE_PIPE;
	v->a[39704] = anon_sym_AMP_AMP;
	v->a[39705] = anon_sym_PIPE;
	v->a[39706] = anon_sym_AMP;
	v->a[39707] = anon_sym_EQ_EQ;
	v->a[39708] = anon_sym_LT;
	v->a[39709] = anon_sym_GT;
	v->a[39710] = anon_sym_LT_LT;
	v->a[39711] = anon_sym_GT_GT;
	v->a[39712] = anon_sym_SEMI_SEMI;
	v->a[39713] = anon_sym_SEMI_AMP;
	v->a[39714] = anon_sym_SEMI_SEMI_AMP;
	v->a[39715] = anon_sym_PIPE_AMP;
	v->a[39716] = anon_sym_EQ_TILDE;
	v->a[39717] = anon_sym_AMP_GT;
	v->a[39718] = anon_sym_AMP_GT_GT;
	v->a[39719] = anon_sym_LT_AMP;
	small_parse_table_1986(v);
}

void	small_parse_table_1986(t_small_parse_table_array *v)
{
	v->a[39720] = anon_sym_GT_AMP;
	v->a[39721] = anon_sym_GT_PIPE;
	v->a[39722] = anon_sym_LT_AMP_DASH;
	v->a[39723] = anon_sym_GT_AMP_DASH;
	v->a[39724] = anon_sym_LT_LT_DASH;
	v->a[39725] = anon_sym_LT_LT_LT;
	v->a[39726] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39727] = anon_sym_DOLLAR_LBRACK;
	v->a[39728] = anon_sym_DOLLAR;
	v->a[39729] = sym__special_character;
	v->a[39730] = anon_sym_DQUOTE;
	v->a[39731] = sym_raw_string;
	v->a[39732] = sym_ansi_c_string;
	v->a[39733] = aux_sym_number_token1;
	v->a[39734] = aux_sym_number_token2;
	v->a[39735] = anon_sym_DOLLAR_LBRACE;
	v->a[39736] = anon_sym_DOLLAR_LPAREN;
	v->a[39737] = anon_sym_BQUOTE;
	v->a[39738] = anon_sym_DOLLAR_BQUOTE;
	v->a[39739] = anon_sym_LT_LPAREN;
	small_parse_table_1987(v);
}

void	small_parse_table_1987(t_small_parse_table_array *v)
{
	v->a[39740] = anon_sym_GT_LPAREN;
	v->a[39741] = sym_word;
	v->a[39742] = 6;
	v->a[39743] = actions(3);
	v->a[39744] = 1;
	v->a[39745] = sym_comment;
	v->a[39746] = actions(4933);
	v->a[39747] = 1;
	v->a[39748] = aux_sym_concatenation_token1;
	v->a[39749] = actions(4935);
	v->a[39750] = 1;
	v->a[39751] = sym__concat;
	v->a[39752] = state(978);
	v->a[39753] = 1;
	v->a[39754] = aux_sym_concatenation_repeat1;
	v->a[39755] = actions(4482);
	v->a[39756] = 5;
	v->a[39757] = sym_file_descriptor;
	v->a[39758] = sym_test_operator;
	v->a[39759] = sym__bare_dollar;
	small_parse_table_1988(v);
}

void	small_parse_table_1988(t_small_parse_table_array *v)
{
	v->a[39760] = sym__brace_start;
	v->a[39761] = aux_sym_heredoc_redirect_token1;
	v->a[39762] = actions(4480);
	v->a[39763] = 41;
	v->a[39764] = anon_sym_LPAREN_LPAREN;
	v->a[39765] = anon_sym_SEMI;
	v->a[39766] = anon_sym_PIPE_PIPE;
	v->a[39767] = anon_sym_AMP_AMP;
	v->a[39768] = anon_sym_PIPE;
	v->a[39769] = anon_sym_AMP;
	v->a[39770] = anon_sym_EQ_EQ;
	v->a[39771] = anon_sym_LT;
	v->a[39772] = anon_sym_GT;
	v->a[39773] = anon_sym_LT_LT;
	v->a[39774] = anon_sym_GT_GT;
	v->a[39775] = anon_sym_SEMI_SEMI;
	v->a[39776] = anon_sym_SEMI_AMP;
	v->a[39777] = anon_sym_SEMI_SEMI_AMP;
	v->a[39778] = anon_sym_PIPE_AMP;
	v->a[39779] = anon_sym_EQ_TILDE;
	small_parse_table_1989(v);
}

void	small_parse_table_1989(t_small_parse_table_array *v)
{
	v->a[39780] = anon_sym_AMP_GT;
	v->a[39781] = anon_sym_AMP_GT_GT;
	v->a[39782] = anon_sym_LT_AMP;
	v->a[39783] = anon_sym_GT_AMP;
	v->a[39784] = anon_sym_GT_PIPE;
	v->a[39785] = anon_sym_LT_AMP_DASH;
	v->a[39786] = anon_sym_GT_AMP_DASH;
	v->a[39787] = anon_sym_LT_LT_DASH;
	v->a[39788] = anon_sym_LT_LT_LT;
	v->a[39789] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39790] = anon_sym_DOLLAR_LBRACK;
	v->a[39791] = anon_sym_DOLLAR;
	v->a[39792] = sym__special_character;
	v->a[39793] = anon_sym_DQUOTE;
	v->a[39794] = sym_raw_string;
	v->a[39795] = sym_ansi_c_string;
	v->a[39796] = aux_sym_number_token1;
	v->a[39797] = aux_sym_number_token2;
	v->a[39798] = anon_sym_DOLLAR_LBRACE;
	v->a[39799] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1990(v);
}

/* EOF small_parse_table_397.c */
