/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_977.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4885(t_small_parse_table_array *v)
{
	v->a[97700] = 1;
	v->a[97701] = sym_comment;
	v->a[97702] = actions(1294);
	v->a[97703] = 6;
	v->a[97704] = sym_file_descriptor;
	v->a[97705] = sym__concat;
	v->a[97706] = sym_test_operator;
	v->a[97707] = sym__brace_start;
	v->a[97708] = ts_builtin_sym_end;
	v->a[97709] = aux_sym_heredoc_redirect_token1;
	v->a[97710] = actions(1292);
	v->a[97711] = 37;
	v->a[97712] = anon_sym_LPAREN_LPAREN;
	v->a[97713] = anon_sym_SEMI;
	v->a[97714] = anon_sym_PIPE_PIPE;
	v->a[97715] = anon_sym_AMP_AMP;
	v->a[97716] = anon_sym_PIPE;
	v->a[97717] = anon_sym_AMP;
	v->a[97718] = anon_sym_LT;
	v->a[97719] = anon_sym_GT;
	small_parse_table_4886(v);
}

void	small_parse_table_4886(t_small_parse_table_array *v)
{
	v->a[97720] = anon_sym_LT_LT;
	v->a[97721] = anon_sym_GT_GT;
	v->a[97722] = anon_sym_SEMI_SEMI;
	v->a[97723] = anon_sym_PIPE_AMP;
	v->a[97724] = anon_sym_AMP_GT;
	v->a[97725] = anon_sym_AMP_GT_GT;
	v->a[97726] = anon_sym_LT_AMP;
	v->a[97727] = anon_sym_GT_AMP;
	v->a[97728] = anon_sym_GT_PIPE;
	v->a[97729] = anon_sym_LT_AMP_DASH;
	v->a[97730] = anon_sym_GT_AMP_DASH;
	v->a[97731] = anon_sym_LT_LT_DASH;
	v->a[97732] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97733] = anon_sym_DOLLAR_LBRACK;
	v->a[97734] = aux_sym_concatenation_token1;
	v->a[97735] = anon_sym_DOLLAR;
	v->a[97736] = sym__special_character;
	v->a[97737] = anon_sym_DQUOTE;
	v->a[97738] = sym_raw_string;
	v->a[97739] = sym_ansi_c_string;
	small_parse_table_4887(v);
}

void	small_parse_table_4887(t_small_parse_table_array *v)
{
	v->a[97740] = aux_sym_number_token1;
	v->a[97741] = aux_sym_number_token2;
	v->a[97742] = anon_sym_DOLLAR_LBRACE;
	v->a[97743] = anon_sym_DOLLAR_LPAREN;
	v->a[97744] = anon_sym_BQUOTE;
	v->a[97745] = anon_sym_DOLLAR_BQUOTE;
	v->a[97746] = anon_sym_LT_LPAREN;
	v->a[97747] = anon_sym_GT_LPAREN;
	v->a[97748] = sym_word;
	v->a[97749] = 26;
	v->a[97750] = actions(71);
	v->a[97751] = 1;
	v->a[97752] = sym_comment;
	v->a[97753] = actions(187);
	v->a[97754] = 1;
	v->a[97755] = anon_sym_TILDE;
	v->a[97756] = actions(350);
	v->a[97757] = 1;
	v->a[97758] = sym_word;
	v->a[97759] = actions(359);
	small_parse_table_4888(v);
}

void	small_parse_table_4888(t_small_parse_table_array *v)
{
	v->a[97760] = 1;
	v->a[97761] = anon_sym_LPAREN;
	v->a[97762] = actions(361);
	v->a[97763] = 1;
	v->a[97764] = anon_sym_BANG;
	v->a[97765] = actions(363);
	v->a[97766] = 1;
	v->a[97767] = anon_sym_DOLLAR_LBRACK;
	v->a[97768] = actions(367);
	v->a[97769] = 1;
	v->a[97770] = anon_sym_DOLLAR;
	v->a[97771] = actions(371);
	v->a[97772] = 1;
	v->a[97773] = anon_sym_DQUOTE;
	v->a[97774] = actions(375);
	v->a[97775] = 1;
	v->a[97776] = aux_sym_number_token1;
	v->a[97777] = actions(377);
	v->a[97778] = 1;
	v->a[97779] = aux_sym_number_token2;
	small_parse_table_4889(v);
}

void	small_parse_table_4889(t_small_parse_table_array *v)
{
	v->a[97780] = actions(379);
	v->a[97781] = 1;
	v->a[97782] = anon_sym_DOLLAR_LBRACE;
	v->a[97783] = actions(381);
	v->a[97784] = 1;
	v->a[97785] = anon_sym_DOLLAR_LPAREN;
	v->a[97786] = actions(385);
	v->a[97787] = 1;
	v->a[97788] = anon_sym_DOLLAR_BQUOTE;
	v->a[97789] = actions(389);
	v->a[97790] = 1;
	v->a[97791] = sym_test_operator;
	v->a[97792] = actions(391);
	v->a[97793] = 1;
	v->a[97794] = sym__brace_start;
	v->a[97795] = actions(5807);
	v->a[97796] = 1;
	v->a[97797] = sym__special_character;
	v->a[97798] = actions(5809);
	v->a[97799] = 1;
	small_parse_table_4890(v);
}

/* EOF small_parse_table_977.c */
