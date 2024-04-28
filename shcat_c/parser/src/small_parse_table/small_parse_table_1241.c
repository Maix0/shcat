/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1241.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6205(t_small_parse_table_array *v)
{
	v->a[124100] = anon_sym_BQUOTE;
	v->a[124101] = anon_sym_DOLLAR_BQUOTE;
	v->a[124102] = anon_sym_LT_LPAREN;
	v->a[124103] = anon_sym_GT_LPAREN;
	v->a[124104] = 6;
	v->a[124105] = actions(3);
	v->a[124106] = 1;
	v->a[124107] = sym_comment;
	v->a[124108] = actions(5844);
	v->a[124109] = 1;
	v->a[124110] = aux_sym_concatenation_token1;
	v->a[124111] = actions(5846);
	v->a[124112] = 1;
	v->a[124113] = sym__concat;
	v->a[124114] = state(2403);
	v->a[124115] = 1;
	v->a[124116] = aux_sym_concatenation_repeat1;
	v->a[124117] = actions(5470);
	v->a[124118] = 4;
	v->a[124119] = sym_file_descriptor;
	small_parse_table_6206(v);
}

void	small_parse_table_6206(t_small_parse_table_array *v)
{
	v->a[124120] = sym_test_operator;
	v->a[124121] = sym__brace_start;
	v->a[124122] = aux_sym_heredoc_redirect_token1;
	v->a[124123] = actions(5468);
	v->a[124124] = 34;
	v->a[124125] = anon_sym_LPAREN_LPAREN;
	v->a[124126] = anon_sym_PIPE_PIPE;
	v->a[124127] = anon_sym_AMP_AMP;
	v->a[124128] = anon_sym_PIPE;
	v->a[124129] = anon_sym_LT;
	v->a[124130] = anon_sym_GT;
	v->a[124131] = anon_sym_LT_LT;
	v->a[124132] = anon_sym_GT_GT;
	v->a[124133] = anon_sym_PIPE_AMP;
	v->a[124134] = anon_sym_AMP_GT;
	v->a[124135] = anon_sym_AMP_GT_GT;
	v->a[124136] = anon_sym_LT_AMP;
	v->a[124137] = anon_sym_GT_AMP;
	v->a[124138] = anon_sym_GT_PIPE;
	v->a[124139] = anon_sym_LT_AMP_DASH;
	small_parse_table_6207(v);
}

void	small_parse_table_6207(t_small_parse_table_array *v)
{
	v->a[124140] = anon_sym_GT_AMP_DASH;
	v->a[124141] = anon_sym_LT_LT_DASH;
	v->a[124142] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124143] = anon_sym_DOLLAR_LBRACK;
	v->a[124144] = anon_sym_DOLLAR;
	v->a[124145] = sym__special_character;
	v->a[124146] = anon_sym_DQUOTE;
	v->a[124147] = sym_raw_string;
	v->a[124148] = sym_ansi_c_string;
	v->a[124149] = aux_sym_number_token1;
	v->a[124150] = aux_sym_number_token2;
	v->a[124151] = anon_sym_DOLLAR_LBRACE;
	v->a[124152] = anon_sym_DOLLAR_LPAREN;
	v->a[124153] = anon_sym_BQUOTE;
	v->a[124154] = anon_sym_DOLLAR_BQUOTE;
	v->a[124155] = anon_sym_LT_LPAREN;
	v->a[124156] = anon_sym_GT_LPAREN;
	v->a[124157] = aux_sym__simple_variable_name_token1;
	v->a[124158] = sym_word;
	v->a[124159] = 3;
	small_parse_table_6208(v);
}

void	small_parse_table_6208(t_small_parse_table_array *v)
{
	v->a[124160] = actions(71);
	v->a[124161] = 1;
	v->a[124162] = sym_comment;
	v->a[124163] = actions(1271);
	v->a[124164] = 15;
	v->a[124165] = anon_sym_PIPE;
	v->a[124166] = anon_sym_EQ_EQ;
	v->a[124167] = anon_sym_LT;
	v->a[124168] = anon_sym_GT;
	v->a[124169] = anon_sym_LT_LT;
	v->a[124170] = anon_sym_LPAREN;
	v->a[124171] = anon_sym_EQ_TILDE;
	v->a[124172] = anon_sym_AMP_GT;
	v->a[124173] = anon_sym_LT_AMP;
	v->a[124174] = anon_sym_GT_AMP;
	v->a[124175] = anon_sym_DOLLAR;
	v->a[124176] = aux_sym_number_token1;
	v->a[124177] = aux_sym_number_token2;
	v->a[124178] = anon_sym_DOLLAR_LPAREN;
	v->a[124179] = sym_word;
	small_parse_table_6209(v);
}

void	small_parse_table_6209(t_small_parse_table_array *v)
{
	v->a[124180] = actions(1281);
	v->a[124181] = 26;
	v->a[124182] = sym_file_descriptor;
	v->a[124183] = sym_test_operator;
	v->a[124184] = sym__bare_dollar;
	v->a[124185] = sym__brace_start;
	v->a[124186] = anon_sym_LPAREN_LPAREN;
	v->a[124187] = anon_sym_PIPE_PIPE;
	v->a[124188] = anon_sym_AMP_AMP;
	v->a[124189] = anon_sym_GT_GT;
	v->a[124190] = anon_sym_PIPE_AMP;
	v->a[124191] = anon_sym_AMP_GT_GT;
	v->a[124192] = anon_sym_GT_PIPE;
	v->a[124193] = anon_sym_LT_AMP_DASH;
	v->a[124194] = anon_sym_GT_AMP_DASH;
	v->a[124195] = anon_sym_LT_LT_DASH;
	v->a[124196] = anon_sym_LT_LT_LT;
	v->a[124197] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124198] = anon_sym_DOLLAR_LBRACK;
	v->a[124199] = sym__special_character;
	small_parse_table_6210(v);
}

/* EOF small_parse_table_1241.c */
