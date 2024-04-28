/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_442.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2210(t_small_parse_table_array *v)
{
	v->a[44200] = sym_test_operator;
	v->a[44201] = sym__brace_start;
	v->a[44202] = aux_sym_heredoc_redirect_token1;
	v->a[44203] = actions(1265);
	v->a[44204] = 40;
	v->a[44205] = anon_sym_LPAREN_LPAREN;
	v->a[44206] = anon_sym_SEMI;
	v->a[44207] = anon_sym_PIPE_PIPE;
	v->a[44208] = anon_sym_AMP_AMP;
	v->a[44209] = anon_sym_PIPE;
	v->a[44210] = anon_sym_AMP;
	v->a[44211] = anon_sym_LT;
	v->a[44212] = anon_sym_GT;
	v->a[44213] = anon_sym_LT_LT;
	v->a[44214] = anon_sym_GT_GT;
	v->a[44215] = anon_sym_esac;
	v->a[44216] = anon_sym_SEMI_SEMI;
	v->a[44217] = anon_sym_SEMI_AMP;
	v->a[44218] = anon_sym_SEMI_SEMI_AMP;
	v->a[44219] = anon_sym_PIPE_AMP;
	small_parse_table_2211(v);
}

void	small_parse_table_2211(t_small_parse_table_array *v)
{
	v->a[44220] = anon_sym_AMP_GT;
	v->a[44221] = anon_sym_AMP_GT_GT;
	v->a[44222] = anon_sym_LT_AMP;
	v->a[44223] = anon_sym_GT_AMP;
	v->a[44224] = anon_sym_GT_PIPE;
	v->a[44225] = anon_sym_LT_AMP_DASH;
	v->a[44226] = anon_sym_GT_AMP_DASH;
	v->a[44227] = anon_sym_LT_LT_DASH;
	v->a[44228] = anon_sym_LT_LT_LT;
	v->a[44229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44230] = anon_sym_DOLLAR_LBRACK;
	v->a[44231] = anon_sym_DOLLAR;
	v->a[44232] = sym__special_character;
	v->a[44233] = anon_sym_DQUOTE;
	v->a[44234] = sym_raw_string;
	v->a[44235] = sym_ansi_c_string;
	v->a[44236] = aux_sym_number_token1;
	v->a[44237] = aux_sym_number_token2;
	v->a[44238] = anon_sym_DOLLAR_LBRACE;
	v->a[44239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2212(v);
}

void	small_parse_table_2212(t_small_parse_table_array *v)
{
	v->a[44240] = anon_sym_BQUOTE;
	v->a[44241] = anon_sym_DOLLAR_BQUOTE;
	v->a[44242] = anon_sym_LT_LPAREN;
	v->a[44243] = anon_sym_GT_LPAREN;
	v->a[44244] = sym_word;
	v->a[44245] = 6;
	v->a[44246] = actions(3);
	v->a[44247] = 1;
	v->a[44248] = sym_comment;
	v->a[44249] = actions(5182);
	v->a[44250] = 1;
	v->a[44251] = aux_sym_concatenation_token1;
	v->a[44252] = actions(5186);
	v->a[44253] = 1;
	v->a[44254] = sym__concat;
	v->a[44255] = state(1079);
	v->a[44256] = 1;
	v->a[44257] = aux_sym_concatenation_repeat1;
	v->a[44258] = actions(1288);
	v->a[44259] = 5;
	small_parse_table_2213(v);
}

void	small_parse_table_2213(t_small_parse_table_array *v)
{
	v->a[44260] = sym_file_descriptor;
	v->a[44261] = sym_variable_name;
	v->a[44262] = sym_test_operator;
	v->a[44263] = sym__brace_start;
	v->a[44264] = aux_sym_heredoc_redirect_token1;
	v->a[44265] = actions(1286);
	v->a[44266] = 40;
	v->a[44267] = anon_sym_LPAREN_LPAREN;
	v->a[44268] = anon_sym_SEMI;
	v->a[44269] = anon_sym_PIPE_PIPE;
	v->a[44270] = anon_sym_AMP_AMP;
	v->a[44271] = anon_sym_PIPE;
	v->a[44272] = anon_sym_AMP;
	v->a[44273] = anon_sym_LT;
	v->a[44274] = anon_sym_GT;
	v->a[44275] = anon_sym_LT_LT;
	v->a[44276] = anon_sym_GT_GT;
	v->a[44277] = anon_sym_esac;
	v->a[44278] = anon_sym_SEMI_SEMI;
	v->a[44279] = anon_sym_SEMI_AMP;
	small_parse_table_2214(v);
}

void	small_parse_table_2214(t_small_parse_table_array *v)
{
	v->a[44280] = anon_sym_SEMI_SEMI_AMP;
	v->a[44281] = anon_sym_PIPE_AMP;
	v->a[44282] = anon_sym_AMP_GT;
	v->a[44283] = anon_sym_AMP_GT_GT;
	v->a[44284] = anon_sym_LT_AMP;
	v->a[44285] = anon_sym_GT_AMP;
	v->a[44286] = anon_sym_GT_PIPE;
	v->a[44287] = anon_sym_LT_AMP_DASH;
	v->a[44288] = anon_sym_GT_AMP_DASH;
	v->a[44289] = anon_sym_LT_LT_DASH;
	v->a[44290] = anon_sym_LT_LT_LT;
	v->a[44291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44292] = anon_sym_DOLLAR_LBRACK;
	v->a[44293] = anon_sym_DOLLAR;
	v->a[44294] = sym__special_character;
	v->a[44295] = anon_sym_DQUOTE;
	v->a[44296] = sym_raw_string;
	v->a[44297] = sym_ansi_c_string;
	v->a[44298] = aux_sym_number_token1;
	v->a[44299] = aux_sym_number_token2;
	small_parse_table_2215(v);
}

/* EOF small_parse_table_442.c */
