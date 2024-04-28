/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_707.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3535(t_small_parse_table_array *v)
{
	v->a[70700] = anon_sym_SEMI;
	v->a[70701] = anon_sym_PIPE_PIPE;
	v->a[70702] = anon_sym_AMP_AMP;
	v->a[70703] = anon_sym_PIPE;
	v->a[70704] = anon_sym_AMP;
	v->a[70705] = anon_sym_LT;
	v->a[70706] = anon_sym_GT;
	v->a[70707] = anon_sym_LT_LT;
	v->a[70708] = anon_sym_GT_GT;
	v->a[70709] = anon_sym_SEMI_SEMI;
	v->a[70710] = anon_sym_SEMI_AMP;
	v->a[70711] = anon_sym_SEMI_SEMI_AMP;
	v->a[70712] = anon_sym_PIPE_AMP;
	v->a[70713] = anon_sym_AMP_GT;
	v->a[70714] = anon_sym_AMP_GT_GT;
	v->a[70715] = anon_sym_LT_AMP;
	v->a[70716] = anon_sym_GT_AMP;
	v->a[70717] = anon_sym_GT_PIPE;
	v->a[70718] = anon_sym_LT_AMP_DASH;
	v->a[70719] = anon_sym_GT_AMP_DASH;
	small_parse_table_3536(v);
}

void	small_parse_table_3536(t_small_parse_table_array *v)
{
	v->a[70720] = anon_sym_LT_LT_DASH;
	v->a[70721] = anon_sym_LT_LT_LT;
	v->a[70722] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70723] = anon_sym_DOLLAR_LBRACK;
	v->a[70724] = aux_sym_concatenation_token1;
	v->a[70725] = anon_sym_DOLLAR;
	v->a[70726] = sym__special_character;
	v->a[70727] = anon_sym_DQUOTE;
	v->a[70728] = sym_raw_string;
	v->a[70729] = sym_ansi_c_string;
	v->a[70730] = aux_sym_number_token1;
	v->a[70731] = aux_sym_number_token2;
	v->a[70732] = anon_sym_DOLLAR_LBRACE;
	v->a[70733] = anon_sym_DOLLAR_LPAREN;
	v->a[70734] = anon_sym_BQUOTE;
	v->a[70735] = anon_sym_DOLLAR_BQUOTE;
	v->a[70736] = anon_sym_LT_LPAREN;
	v->a[70737] = anon_sym_GT_LPAREN;
	v->a[70738] = sym_word;
	v->a[70739] = 6;
	small_parse_table_3537(v);
}

void	small_parse_table_3537(t_small_parse_table_array *v)
{
	v->a[70740] = actions(3);
	v->a[70741] = 1;
	v->a[70742] = sym_comment;
	v->a[70743] = actions(5762);
	v->a[70744] = 1;
	v->a[70745] = aux_sym_concatenation_token1;
	v->a[70746] = actions(5764);
	v->a[70747] = 1;
	v->a[70748] = sym__concat;
	v->a[70749] = state(1582);
	v->a[70750] = 1;
	v->a[70751] = aux_sym_concatenation_repeat1;
	v->a[70752] = actions(1267);
	v->a[70753] = 5;
	v->a[70754] = sym_file_descriptor;
	v->a[70755] = sym_test_operator;
	v->a[70756] = sym__brace_start;
	v->a[70757] = ts_builtin_sym_end;
	v->a[70758] = aux_sym_heredoc_redirect_token1;
	v->a[70759] = actions(1265);
	small_parse_table_3538(v);
}

void	small_parse_table_3538(t_small_parse_table_array *v)
{
	v->a[70760] = 37;
	v->a[70761] = anon_sym_LPAREN_LPAREN;
	v->a[70762] = anon_sym_SEMI;
	v->a[70763] = anon_sym_PIPE_PIPE;
	v->a[70764] = anon_sym_AMP_AMP;
	v->a[70765] = anon_sym_PIPE;
	v->a[70766] = anon_sym_AMP;
	v->a[70767] = anon_sym_LT;
	v->a[70768] = anon_sym_GT;
	v->a[70769] = anon_sym_LT_LT;
	v->a[70770] = anon_sym_GT_GT;
	v->a[70771] = anon_sym_SEMI_SEMI;
	v->a[70772] = anon_sym_PIPE_AMP;
	v->a[70773] = anon_sym_AMP_GT;
	v->a[70774] = anon_sym_AMP_GT_GT;
	v->a[70775] = anon_sym_LT_AMP;
	v->a[70776] = anon_sym_GT_AMP;
	v->a[70777] = anon_sym_GT_PIPE;
	v->a[70778] = anon_sym_LT_AMP_DASH;
	v->a[70779] = anon_sym_GT_AMP_DASH;
	small_parse_table_3539(v);
}

void	small_parse_table_3539(t_small_parse_table_array *v)
{
	v->a[70780] = anon_sym_LT_LT_DASH;
	v->a[70781] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70782] = anon_sym_DOLLAR_LBRACK;
	v->a[70783] = anon_sym_DOLLAR;
	v->a[70784] = sym__special_character;
	v->a[70785] = anon_sym_DQUOTE;
	v->a[70786] = sym_raw_string;
	v->a[70787] = sym_ansi_c_string;
	v->a[70788] = aux_sym_number_token1;
	v->a[70789] = aux_sym_number_token2;
	v->a[70790] = anon_sym_DOLLAR_LBRACE;
	v->a[70791] = anon_sym_DOLLAR_LPAREN;
	v->a[70792] = anon_sym_BQUOTE;
	v->a[70793] = anon_sym_DOLLAR_BQUOTE;
	v->a[70794] = anon_sym_LT_LPAREN;
	v->a[70795] = anon_sym_GT_LPAREN;
	v->a[70796] = aux_sym__simple_variable_name_token1;
	v->a[70797] = sym_word;
	v->a[70798] = 6;
	v->a[70799] = actions(3);
	small_parse_table_3540(v);
}

/* EOF small_parse_table_707.c */
