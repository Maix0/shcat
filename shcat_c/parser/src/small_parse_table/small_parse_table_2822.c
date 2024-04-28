/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2822.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14110(t_small_parse_table_array *v)
{
	v->a[282200] = anon_sym_AMP_AMP;
	v->a[282201] = anon_sym_GT_GT;
	v->a[282202] = anon_sym_PIPE_AMP;
	v->a[282203] = anon_sym_AMP_GT_GT;
	v->a[282204] = anon_sym_GT_PIPE;
	v->a[282205] = anon_sym_LT_AMP_DASH;
	v->a[282206] = anon_sym_GT_AMP_DASH;
	v->a[282207] = anon_sym_LT_LT_DASH;
	v->a[282208] = anon_sym_LT_LT_LT;
	v->a[282209] = 3;
	v->a[282210] = actions(71);
	v->a[282211] = 1;
	v->a[282212] = sym_comment;
	v->a[282213] = actions(12368);
	v->a[282214] = 6;
	v->a[282215] = anon_sym_LPAREN;
	v->a[282216] = anon_sym_DOLLAR;
	v->a[282217] = aux_sym_number_token1;
	v->a[282218] = aux_sym_number_token2;
	v->a[282219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_14111(v);
}

void	small_parse_table_14111(t_small_parse_table_array *v)
{
	v->a[282220] = sym_word;
	v->a[282221] = actions(12370);
	v->a[282222] = 15;
	v->a[282223] = sym_test_operator;
	v->a[282224] = sym_extglob_pattern;
	v->a[282225] = sym__brace_start;
	v->a[282226] = anon_sym_LPAREN_LPAREN;
	v->a[282227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282228] = anon_sym_DOLLAR_LBRACK;
	v->a[282229] = sym__special_character;
	v->a[282230] = anon_sym_DQUOTE;
	v->a[282231] = sym_raw_string;
	v->a[282232] = sym_ansi_c_string;
	v->a[282233] = anon_sym_DOLLAR_LBRACE;
	v->a[282234] = anon_sym_BQUOTE;
	v->a[282235] = anon_sym_DOLLAR_BQUOTE;
	v->a[282236] = anon_sym_LT_LPAREN;
	v->a[282237] = anon_sym_GT_LPAREN;
	v->a[282238] = 6;
	v->a[282239] = actions(3);
	small_parse_table_14112(v);
}

void	small_parse_table_14112(t_small_parse_table_array *v)
{
	v->a[282240] = 1;
	v->a[282241] = sym_comment;
	v->a[282242] = actions(11651);
	v->a[282243] = 1;
	v->a[282244] = aux_sym_concatenation_token1;
	v->a[282245] = actions(11653);
	v->a[282246] = 1;
	v->a[282247] = sym__concat;
	v->a[282248] = state(5393);
	v->a[282249] = 1;
	v->a[282250] = aux_sym_concatenation_repeat1;
	v->a[282251] = actions(5697);
	v->a[282252] = 2;
	v->a[282253] = sym_file_descriptor;
	v->a[282254] = aux_sym_heredoc_redirect_token1;
	v->a[282255] = actions(5695);
	v->a[282256] = 16;
	v->a[282257] = anon_sym_PIPE_PIPE;
	v->a[282258] = anon_sym_AMP_AMP;
	v->a[282259] = anon_sym_PIPE;
	small_parse_table_14113(v);
}

void	small_parse_table_14113(t_small_parse_table_array *v)
{
	v->a[282260] = anon_sym_LT;
	v->a[282261] = anon_sym_GT;
	v->a[282262] = anon_sym_LT_LT;
	v->a[282263] = anon_sym_GT_GT;
	v->a[282264] = anon_sym_PIPE_AMP;
	v->a[282265] = anon_sym_AMP_GT;
	v->a[282266] = anon_sym_AMP_GT_GT;
	v->a[282267] = anon_sym_LT_AMP;
	v->a[282268] = anon_sym_GT_AMP;
	v->a[282269] = anon_sym_GT_PIPE;
	v->a[282270] = anon_sym_LT_AMP_DASH;
	v->a[282271] = anon_sym_GT_AMP_DASH;
	v->a[282272] = anon_sym_LT_LT_DASH;
	v->a[282273] = 6;
	v->a[282274] = actions(3);
	v->a[282275] = 1;
	v->a[282276] = sym_comment;
	v->a[282277] = actions(11651);
	v->a[282278] = 1;
	v->a[282279] = aux_sym_concatenation_token1;
	small_parse_table_14114(v);
}

void	small_parse_table_14114(t_small_parse_table_array *v)
{
	v->a[282280] = actions(11653);
	v->a[282281] = 1;
	v->a[282282] = sym__concat;
	v->a[282283] = state(5392);
	v->a[282284] = 1;
	v->a[282285] = aux_sym_concatenation_repeat1;
	v->a[282286] = actions(4372);
	v->a[282287] = 2;
	v->a[282288] = sym_file_descriptor;
	v->a[282289] = aux_sym_heredoc_redirect_token1;
	v->a[282290] = actions(4370);
	v->a[282291] = 16;
	v->a[282292] = anon_sym_PIPE_PIPE;
	v->a[282293] = anon_sym_AMP_AMP;
	v->a[282294] = anon_sym_PIPE;
	v->a[282295] = anon_sym_LT;
	v->a[282296] = anon_sym_GT;
	v->a[282297] = anon_sym_LT_LT;
	v->a[282298] = anon_sym_GT_GT;
	v->a[282299] = anon_sym_PIPE_AMP;
	small_parse_table_14115(v);
}

/* EOF small_parse_table_2822.c */
