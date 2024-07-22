/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_422.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2110(t_small_parse_table_array *v)
{
	v->a[42200] = anon_sym_DOLLAR;
	v->a[42201] = anon_sym_DQUOTE;
	v->a[42202] = sym_raw_string;
	v->a[42203] = sym_number;
	v->a[42204] = anon_sym_DOLLAR_LBRACE;
	v->a[42205] = anon_sym_DOLLAR_LPAREN;
	v->a[42206] = anon_sym_BQUOTE;
	v->a[42207] = sym_word;
	v->a[42208] = 5;
	v->a[42209] = actions(3);
	v->a[42210] = 1;
	v->a[42211] = sym_comment;
	v->a[42212] = actions(792);
	v->a[42213] = 1;
	v->a[42214] = sym_variable_name;
	v->a[42215] = actions(1500);
	v->a[42216] = 1;
	v->a[42217] = sym_file_descriptor;
	v->a[42218] = actions(780);
	v->a[42219] = 9;
	small_parse_table_2111(v);
}

void	small_parse_table_2111(t_small_parse_table_array *v)
{
	v->a[42220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42221] = anon_sym_DOLLAR;
	v->a[42222] = anon_sym_DQUOTE;
	v->a[42223] = sym_raw_string;
	v->a[42224] = sym_number;
	v->a[42225] = anon_sym_DOLLAR_LBRACE;
	v->a[42226] = anon_sym_DOLLAR_LPAREN;
	v->a[42227] = anon_sym_BQUOTE;
	v->a[42228] = sym_word;
	v->a[42229] = actions(1498);
	v->a[42230] = 16;
	v->a[42231] = anon_sym_PIPE;
	v->a[42232] = anon_sym_RPAREN;
	v->a[42233] = anon_sym_SEMI_SEMI;
	v->a[42234] = anon_sym_AMP_AMP;
	v->a[42235] = anon_sym_PIPE_PIPE;
	v->a[42236] = anon_sym_LT;
	v->a[42237] = anon_sym_GT;
	v->a[42238] = anon_sym_GT_GT;
	v->a[42239] = anon_sym_LT_AMP;
	small_parse_table_2112(v);
}

void	small_parse_table_2112(t_small_parse_table_array *v)
{
	v->a[42240] = anon_sym_GT_AMP;
	v->a[42241] = anon_sym_GT_PIPE;
	v->a[42242] = anon_sym_LT_GT;
	v->a[42243] = anon_sym_LT_LT;
	v->a[42244] = anon_sym_LT_LT_DASH;
	v->a[42245] = aux_sym_heredoc_redirect_token1;
	v->a[42246] = anon_sym_SEMI;
	v->a[42247] = 12;
	v->a[42248] = actions(3);
	v->a[42249] = 1;
	v->a[42250] = sym_comment;
	v->a[42251] = actions(529);
	v->a[42252] = 1;
	v->a[42253] = sym_file_descriptor;
	v->a[42254] = actions(1504);
	v->a[42255] = 1;
	v->a[42256] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42257] = actions(1506);
	v->a[42258] = 1;
	v->a[42259] = anon_sym_DOLLAR;
	small_parse_table_2113(v);
}

void	small_parse_table_2113(t_small_parse_table_array *v)
{
	v->a[42260] = actions(1508);
	v->a[42261] = 1;
	v->a[42262] = anon_sym_DQUOTE;
	v->a[42263] = actions(1510);
	v->a[42264] = 1;
	v->a[42265] = anon_sym_DOLLAR_LBRACE;
	v->a[42266] = actions(1512);
	v->a[42267] = 1;
	v->a[42268] = anon_sym_DOLLAR_LPAREN;
	v->a[42269] = actions(1514);
	v->a[42270] = 1;
	v->a[42271] = anon_sym_BQUOTE;
	v->a[42272] = state(717);
	v->a[42273] = 2;
	v->a[42274] = sym_concatenation;
	v->a[42275] = aux_sym_for_statement_repeat1;
	v->a[42276] = actions(1502);
	v->a[42277] = 3;
	v->a[42278] = sym_raw_string;
	v->a[42279] = sym_number;
	small_parse_table_2114(v);
}

void	small_parse_table_2114(t_small_parse_table_array *v)
{
	v->a[42280] = sym_word;
	v->a[42281] = state(902);
	v->a[42282] = 5;
	v->a[42283] = sym_arithmetic_expansion;
	v->a[42284] = sym_string;
	v->a[42285] = sym_simple_expansion;
	v->a[42286] = sym_expansion;
	v->a[42287] = sym_command_substitution;
	v->a[42288] = actions(531);
	v->a[42289] = 10;
	v->a[42290] = anon_sym_AMP_AMP;
	v->a[42291] = anon_sym_PIPE_PIPE;
	v->a[42292] = anon_sym_LT;
	v->a[42293] = anon_sym_GT;
	v->a[42294] = anon_sym_GT_GT;
	v->a[42295] = anon_sym_LT_AMP;
	v->a[42296] = anon_sym_GT_AMP;
	v->a[42297] = anon_sym_GT_PIPE;
	v->a[42298] = anon_sym_LT_GT;
	v->a[42299] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2115(v);
}

/* EOF small_parse_table_422.c */
