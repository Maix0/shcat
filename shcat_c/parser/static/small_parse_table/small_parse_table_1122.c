/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1122.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5610(t_small_parse_table_array *v)
{
	v->a[112200] = actions(5819);
	v->a[112201] = 17;
	v->a[112202] = anon_sym_LPAREN_LPAREN;
	v->a[112203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112204] = anon_sym_DOLLAR_LBRACK;
	v->a[112205] = anon_sym_DOLLAR;
	v->a[112206] = sym__special_character;
	v->a[112207] = anon_sym_DQUOTE;
	v->a[112208] = sym_raw_string;
	v->a[112209] = sym_ansi_c_string;
	v->a[112210] = aux_sym_number_token1;
	v->a[112211] = aux_sym_number_token2;
	v->a[112212] = anon_sym_DOLLAR_LBRACE;
	v->a[112213] = anon_sym_DOLLAR_LPAREN;
	v->a[112214] = anon_sym_BQUOTE;
	v->a[112215] = anon_sym_DOLLAR_BQUOTE;
	v->a[112216] = anon_sym_LT_LPAREN;
	v->a[112217] = anon_sym_GT_LPAREN;
	v->a[112218] = sym_word;
	v->a[112219] = 3;
	small_parse_table_5611(v);
}

void	small_parse_table_5611(t_small_parse_table_array *v)
{
	v->a[112220] = actions(3);
	v->a[112221] = 1;
	v->a[112222] = sym_comment;
	v->a[112223] = actions(1263);
	v->a[112224] = 4;
	v->a[112225] = sym_file_descriptor;
	v->a[112226] = sym_test_operator;
	v->a[112227] = sym__brace_start;
	v->a[112228] = aux_sym_heredoc_redirect_token1;
	v->a[112229] = actions(1261);
	v->a[112230] = 39;
	v->a[112231] = anon_sym_LPAREN_LPAREN;
	v->a[112232] = anon_sym_SEMI;
	v->a[112233] = anon_sym_PIPE_PIPE;
	v->a[112234] = anon_sym_AMP_AMP;
	v->a[112235] = anon_sym_PIPE;
	v->a[112236] = anon_sym_AMP;
	v->a[112237] = anon_sym_LT;
	v->a[112238] = anon_sym_GT;
	v->a[112239] = anon_sym_LT_LT;
	small_parse_table_5612(v);
}

void	small_parse_table_5612(t_small_parse_table_array *v)
{
	v->a[112240] = anon_sym_GT_GT;
	v->a[112241] = anon_sym_SEMI_SEMI;
	v->a[112242] = anon_sym_SEMI_AMP;
	v->a[112243] = anon_sym_SEMI_SEMI_AMP;
	v->a[112244] = anon_sym_PIPE_AMP;
	v->a[112245] = anon_sym_AMP_GT;
	v->a[112246] = anon_sym_AMP_GT_GT;
	v->a[112247] = anon_sym_LT_AMP;
	v->a[112248] = anon_sym_GT_AMP;
	v->a[112249] = anon_sym_GT_PIPE;
	v->a[112250] = anon_sym_LT_AMP_DASH;
	v->a[112251] = anon_sym_GT_AMP_DASH;
	v->a[112252] = anon_sym_LT_LT_DASH;
	v->a[112253] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112254] = anon_sym_DOLLAR_LBRACK;
	v->a[112255] = anon_sym_DOLLAR;
	v->a[112256] = sym__special_character;
	v->a[112257] = anon_sym_DQUOTE;
	v->a[112258] = sym_raw_string;
	v->a[112259] = sym_ansi_c_string;
	small_parse_table_5613(v);
}

void	small_parse_table_5613(t_small_parse_table_array *v)
{
	v->a[112260] = aux_sym_number_token1;
	v->a[112261] = aux_sym_number_token2;
	v->a[112262] = anon_sym_DOLLAR_LBRACE;
	v->a[112263] = anon_sym_DOLLAR_LPAREN;
	v->a[112264] = anon_sym_BQUOTE;
	v->a[112265] = anon_sym_DOLLAR_BQUOTE;
	v->a[112266] = anon_sym_LT_LPAREN;
	v->a[112267] = anon_sym_GT_LPAREN;
	v->a[112268] = aux_sym__simple_variable_name_token1;
	v->a[112269] = sym_word;
	v->a[112270] = 8;
	v->a[112271] = actions(3);
	v->a[112272] = 1;
	v->a[112273] = sym_comment;
	v->a[112274] = actions(5826);
	v->a[112275] = 1;
	v->a[112276] = aux_sym_heredoc_redirect_token1;
	v->a[112277] = actions(5828);
	v->a[112278] = 1;
	v->a[112279] = sym_file_descriptor;
	small_parse_table_5614(v);
}

void	small_parse_table_5614(t_small_parse_table_array *v)
{
	v->a[112280] = actions(6338);
	v->a[112281] = 1;
	v->a[112282] = anon_sym_RPAREN;
	v->a[112283] = actions(5831);
	v->a[112284] = 3;
	v->a[112285] = sym_variable_name;
	v->a[112286] = sym_test_operator;
	v->a[112287] = sym__brace_start;
	v->a[112288] = actions(5821);
	v->a[112289] = 9;
	v->a[112290] = anon_sym_SEMI;
	v->a[112291] = anon_sym_PIPE_PIPE;
	v->a[112292] = anon_sym_AMP_AMP;
	v->a[112293] = anon_sym_PIPE;
	v->a[112294] = anon_sym_AMP;
	v->a[112295] = anon_sym_LT_LT;
	v->a[112296] = anon_sym_SEMI_SEMI;
	v->a[112297] = anon_sym_PIPE_AMP;
	v->a[112298] = anon_sym_LT_LT_DASH;
	v->a[112299] = actions(5823);
	small_parse_table_5615(v);
}

/* EOF small_parse_table_1122.c */
