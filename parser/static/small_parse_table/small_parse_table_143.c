/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_143.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_715(t_small_parse_table_array *v)
{
	v->a[14300] = anon_sym_BQUOTE;
	v->a[14301] = actions(2476);
	v->a[14302] = 1;
	v->a[14303] = anon_sym_DOLLAR_BQUOTE;
	v->a[14304] = actions(2478);
	v->a[14305] = 1;
	v->a[14306] = sym_file_descriptor;
	v->a[14307] = actions(2480);
	v->a[14308] = 1;
	v->a[14309] = sym_test_operator;
	v->a[14310] = actions(2482);
	v->a[14311] = 1;
	v->a[14312] = sym__brace_start;
	v->a[14313] = state(2073);
	v->a[14314] = 1;
	v->a[14315] = aux_sym__heredoc_command;
	v->a[14316] = state(2852);
	v->a[14317] = 1;
	v->a[14318] = aux_sym__literal_repeat1;
	v->a[14319] = state(2882);
	small_parse_table_716(v);
}

void	small_parse_table_716(t_small_parse_table_array *v)
{
	v->a[14320] = 1;
	v->a[14321] = sym_concatenation;
	v->a[14322] = state(3760);
	v->a[14323] = 1;
	v->a[14324] = sym__heredoc_expression;
	v->a[14325] = state(3765);
	v->a[14326] = 1;
	v->a[14327] = sym__heredoc_pipeline;
	v->a[14328] = actions(2446);
	v->a[14329] = 2;
	v->a[14330] = sym_raw_string;
	v->a[14331] = sym_word;
	v->a[14332] = actions(2448);
	v->a[14333] = 2;
	v->a[14334] = anon_sym_PIPE;
	v->a[14335] = anon_sym_PIPE_AMP;
	v->a[14336] = actions(2450);
	v->a[14337] = 2;
	v->a[14338] = anon_sym_AMP_AMP;
	v->a[14339] = anon_sym_PIPE_PIPE;
	small_parse_table_717(v);
}

void	small_parse_table_717(t_small_parse_table_array *v)
{
	v->a[14340] = actions(2454);
	v->a[14341] = 2;
	v->a[14342] = anon_sym_LT_AMP_DASH;
	v->a[14343] = anon_sym_GT_AMP_DASH;
	v->a[14344] = state(2754);
	v->a[14345] = 2;
	v->a[14346] = sym_file_redirect;
	v->a[14347] = aux_sym_redirected_statement_repeat2;
	v->a[14348] = state(2716);
	v->a[14349] = 7;
	v->a[14350] = sym_arithmetic_expansion;
	v->a[14351] = sym_brace_expression;
	v->a[14352] = sym_string;
	v->a[14353] = sym_number;
	v->a[14354] = sym_simple_expansion;
	v->a[14355] = sym_expansion;
	v->a[14356] = sym_command_substitution;
	v->a[14357] = actions(2452);
	v->a[14358] = 8;
	v->a[14359] = anon_sym_LT;
	small_parse_table_718(v);
}

void	small_parse_table_718(t_small_parse_table_array *v)
{
	v->a[14360] = anon_sym_GT;
	v->a[14361] = anon_sym_GT_GT;
	v->a[14362] = anon_sym_AMP_GT;
	v->a[14363] = anon_sym_AMP_GT_GT;
	v->a[14364] = anon_sym_LT_AMP;
	v->a[14365] = anon_sym_GT_AMP;
	v->a[14366] = anon_sym_GT_PIPE;
	v->a[14367] = 23;
	v->a[14368] = actions(57);
	v->a[14369] = 1;
	v->a[14370] = sym_comment;
	v->a[14371] = actions(643);
	v->a[14372] = 1;
	v->a[14373] = anon_sym_LPAREN;
	v->a[14374] = actions(2484);
	v->a[14375] = 1;
	v->a[14376] = sym_word;
	v->a[14377] = actions(2486);
	v->a[14378] = 1;
	v->a[14379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_719(v);
}

void	small_parse_table_719(t_small_parse_table_array *v)
{
	v->a[14380] = actions(2488);
	v->a[14381] = 1;
	v->a[14382] = anon_sym_DOLLAR;
	v->a[14383] = actions(2490);
	v->a[14384] = 1;
	v->a[14385] = sym__special_character;
	v->a[14386] = actions(2492);
	v->a[14387] = 1;
	v->a[14388] = anon_sym_DQUOTE;
	v->a[14389] = actions(2496);
	v->a[14390] = 1;
	v->a[14391] = aux_sym_number_token1;
	v->a[14392] = actions(2498);
	v->a[14393] = 1;
	v->a[14394] = aux_sym_number_token2;
	v->a[14395] = actions(2500);
	v->a[14396] = 1;
	v->a[14397] = anon_sym_DOLLAR_LBRACE;
	v->a[14398] = actions(2502);
	v->a[14399] = 1;
	small_parse_table_720(v);
}

/* EOF small_parse_table_143.c */
