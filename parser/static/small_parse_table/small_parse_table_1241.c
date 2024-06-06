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
	v->a[124100] = actions(3);
	v->a[124101] = 1;
	v->a[124102] = sym_comment;
	v->a[124103] = actions(3803);
	v->a[124104] = 1;
	v->a[124105] = aux_sym_heredoc_redirect_token1;
	v->a[124106] = actions(7134);
	v->a[124107] = 1;
	v->a[124108] = sym_file_descriptor;
	v->a[124109] = actions(2516);
	v->a[124110] = 2;
	v->a[124111] = anon_sym_PIPE;
	v->a[124112] = anon_sym_PIPE_AMP;
	v->a[124113] = actions(2945);
	v->a[124114] = 2;
	v->a[124115] = anon_sym_LT_LT;
	v->a[124116] = anon_sym_LT_LT_DASH;
	v->a[124117] = actions(3799);
	v->a[124118] = 2;
	v->a[124119] = anon_sym_AMP_AMP;
	small_parse_table_6206(v);
}

void	small_parse_table_6206(t_small_parse_table_array *v)
{
	v->a[124120] = anon_sym_PIPE_PIPE;
	v->a[124121] = actions(7132);
	v->a[124122] = 2;
	v->a[124123] = anon_sym_LT_AMP_DASH;
	v->a[124124] = anon_sym_GT_AMP_DASH;
	v->a[124125] = state(2613);
	v->a[124126] = 3;
	v->a[124127] = sym_file_redirect;
	v->a[124128] = sym_heredoc_redirect;
	v->a[124129] = aux_sym_redirected_statement_repeat1;
	v->a[124130] = actions(7130);
	v->a[124131] = 8;
	v->a[124132] = anon_sym_LT;
	v->a[124133] = anon_sym_GT;
	v->a[124134] = anon_sym_GT_GT;
	v->a[124135] = anon_sym_AMP_GT;
	v->a[124136] = anon_sym_AMP_GT_GT;
	v->a[124137] = anon_sym_LT_AMP;
	v->a[124138] = anon_sym_GT_AMP;
	v->a[124139] = anon_sym_GT_PIPE;
	small_parse_table_6207(v);
}

void	small_parse_table_6207(t_small_parse_table_array *v)
{
	v->a[124140] = 5;
	v->a[124141] = actions(57);
	v->a[124142] = 1;
	v->a[124143] = sym_comment;
	v->a[124144] = state(2616);
	v->a[124145] = 1;
	v->a[124146] = aux_sym_concatenation_repeat1;
	v->a[124147] = actions(7136);
	v->a[124148] = 2;
	v->a[124149] = sym__concat;
	v->a[124150] = aux_sym_concatenation_token1;
	v->a[124151] = actions(2652);
	v->a[124152] = 7;
	v->a[124153] = anon_sym_PIPE;
	v->a[124154] = anon_sym_LT;
	v->a[124155] = anon_sym_GT;
	v->a[124156] = anon_sym_AMP_GT;
	v->a[124157] = anon_sym_LT_AMP;
	v->a[124158] = anon_sym_GT_AMP;
	v->a[124159] = anon_sym_LT_LT;
	small_parse_table_6208(v);
}

void	small_parse_table_6208(t_small_parse_table_array *v)
{
	v->a[124160] = actions(2654);
	v->a[124161] = 10;
	v->a[124162] = sym_file_descriptor;
	v->a[124163] = anon_sym_PIPE_AMP;
	v->a[124164] = anon_sym_AMP_AMP;
	v->a[124165] = anon_sym_PIPE_PIPE;
	v->a[124166] = anon_sym_GT_GT;
	v->a[124167] = anon_sym_AMP_GT_GT;
	v->a[124168] = anon_sym_GT_PIPE;
	v->a[124169] = anon_sym_LT_AMP_DASH;
	v->a[124170] = anon_sym_GT_AMP_DASH;
	v->a[124171] = anon_sym_LT_LT_DASH;
	v->a[124172] = 3;
	v->a[124173] = actions(3);
	v->a[124174] = 1;
	v->a[124175] = sym_comment;
	v->a[124176] = actions(3050);
	v->a[124177] = 4;
	v->a[124178] = sym__concat;
	v->a[124179] = sym_test_operator;
	small_parse_table_6209(v);
}

void	small_parse_table_6209(t_small_parse_table_array *v)
{
	v->a[124180] = sym__brace_start;
	v->a[124181] = aux_sym_heredoc_redirect_token1;
	v->a[124182] = actions(3048);
	v->a[124183] = 16;
	v->a[124184] = anon_sym_SEMI_SEMI;
	v->a[124185] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124186] = anon_sym_AMP;
	v->a[124187] = aux_sym_concatenation_token1;
	v->a[124188] = anon_sym_DOLLAR;
	v->a[124189] = sym__special_character;
	v->a[124190] = anon_sym_DQUOTE;
	v->a[124191] = sym_raw_string;
	v->a[124192] = aux_sym_number_token1;
	v->a[124193] = aux_sym_number_token2;
	v->a[124194] = anon_sym_DOLLAR_LBRACE;
	v->a[124195] = anon_sym_DOLLAR_LPAREN;
	v->a[124196] = anon_sym_BQUOTE;
	v->a[124197] = anon_sym_DOLLAR_BQUOTE;
	v->a[124198] = sym_word;
	v->a[124199] = anon_sym_SEMI;
	small_parse_table_6210(v);
}

/* EOF small_parse_table_1241.c */
