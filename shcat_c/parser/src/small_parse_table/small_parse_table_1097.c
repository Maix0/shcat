/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1097.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5485(t_small_parse_table_array *v)
{
	v->a[109700] = anon_sym_AMP_AMP;
	v->a[109701] = anon_sym_PIPE;
	v->a[109702] = anon_sym_AMP;
	v->a[109703] = anon_sym_LT_LT;
	v->a[109704] = anon_sym_SEMI_SEMI;
	v->a[109705] = anon_sym_PIPE_AMP;
	v->a[109706] = anon_sym_LT_LT_DASH;
	v->a[109707] = actions(5823);
	v->a[109708] = 11;
	v->a[109709] = anon_sym_LT;
	v->a[109710] = anon_sym_GT;
	v->a[109711] = anon_sym_GT_GT;
	v->a[109712] = anon_sym_AMP_GT;
	v->a[109713] = anon_sym_AMP_GT_GT;
	v->a[109714] = anon_sym_LT_AMP;
	v->a[109715] = anon_sym_GT_AMP;
	v->a[109716] = anon_sym_GT_PIPE;
	v->a[109717] = anon_sym_LT_AMP_DASH;
	v->a[109718] = anon_sym_GT_AMP_DASH;
	v->a[109719] = anon_sym_LT_LT_LT;
	small_parse_table_5486(v);
}

void	small_parse_table_5486(t_small_parse_table_array *v)
{
	v->a[109720] = actions(5819);
	v->a[109721] = 17;
	v->a[109722] = anon_sym_LPAREN_LPAREN;
	v->a[109723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109724] = anon_sym_DOLLAR_LBRACK;
	v->a[109725] = anon_sym_DOLLAR;
	v->a[109726] = sym__special_character;
	v->a[109727] = anon_sym_DQUOTE;
	v->a[109728] = sym_raw_string;
	v->a[109729] = sym_ansi_c_string;
	v->a[109730] = aux_sym_number_token1;
	v->a[109731] = aux_sym_number_token2;
	v->a[109732] = anon_sym_DOLLAR_LBRACE;
	v->a[109733] = anon_sym_DOLLAR_LPAREN;
	v->a[109734] = anon_sym_BQUOTE;
	v->a[109735] = anon_sym_DOLLAR_BQUOTE;
	v->a[109736] = anon_sym_LT_LPAREN;
	v->a[109737] = anon_sym_GT_LPAREN;
	v->a[109738] = sym_word;
	v->a[109739] = 8;
	small_parse_table_5487(v);
}

void	small_parse_table_5487(t_small_parse_table_array *v)
{
	v->a[109740] = actions(3);
	v->a[109741] = 1;
	v->a[109742] = sym_comment;
	v->a[109743] = actions(5826);
	v->a[109744] = 1;
	v->a[109745] = aux_sym_heredoc_redirect_token1;
	v->a[109746] = actions(5828);
	v->a[109747] = 1;
	v->a[109748] = sym_file_descriptor;
	v->a[109749] = actions(6245);
	v->a[109750] = 1;
	v->a[109751] = anon_sym_RPAREN;
	v->a[109752] = actions(5831);
	v->a[109753] = 3;
	v->a[109754] = sym_variable_name;
	v->a[109755] = sym_test_operator;
	v->a[109756] = sym__brace_start;
	v->a[109757] = actions(5821);
	v->a[109758] = 9;
	v->a[109759] = anon_sym_SEMI;
	small_parse_table_5488(v);
}

void	small_parse_table_5488(t_small_parse_table_array *v)
{
	v->a[109760] = anon_sym_PIPE_PIPE;
	v->a[109761] = anon_sym_AMP_AMP;
	v->a[109762] = anon_sym_PIPE;
	v->a[109763] = anon_sym_AMP;
	v->a[109764] = anon_sym_LT_LT;
	v->a[109765] = anon_sym_SEMI_SEMI;
	v->a[109766] = anon_sym_PIPE_AMP;
	v->a[109767] = anon_sym_LT_LT_DASH;
	v->a[109768] = actions(5823);
	v->a[109769] = 11;
	v->a[109770] = anon_sym_LT;
	v->a[109771] = anon_sym_GT;
	v->a[109772] = anon_sym_GT_GT;
	v->a[109773] = anon_sym_AMP_GT;
	v->a[109774] = anon_sym_AMP_GT_GT;
	v->a[109775] = anon_sym_LT_AMP;
	v->a[109776] = anon_sym_GT_AMP;
	v->a[109777] = anon_sym_GT_PIPE;
	v->a[109778] = anon_sym_LT_AMP_DASH;
	v->a[109779] = anon_sym_GT_AMP_DASH;
	small_parse_table_5489(v);
}

void	small_parse_table_5489(t_small_parse_table_array *v)
{
	v->a[109780] = anon_sym_LT_LT_LT;
	v->a[109781] = actions(5819);
	v->a[109782] = 17;
	v->a[109783] = anon_sym_LPAREN_LPAREN;
	v->a[109784] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109785] = anon_sym_DOLLAR_LBRACK;
	v->a[109786] = anon_sym_DOLLAR;
	v->a[109787] = sym__special_character;
	v->a[109788] = anon_sym_DQUOTE;
	v->a[109789] = sym_raw_string;
	v->a[109790] = sym_ansi_c_string;
	v->a[109791] = aux_sym_number_token1;
	v->a[109792] = aux_sym_number_token2;
	v->a[109793] = anon_sym_DOLLAR_LBRACE;
	v->a[109794] = anon_sym_DOLLAR_LPAREN;
	v->a[109795] = anon_sym_BQUOTE;
	v->a[109796] = anon_sym_DOLLAR_BQUOTE;
	v->a[109797] = anon_sym_LT_LPAREN;
	v->a[109798] = anon_sym_GT_LPAREN;
	v->a[109799] = sym_word;
	small_parse_table_5490(v);
}

/* EOF small_parse_table_1097.c */
