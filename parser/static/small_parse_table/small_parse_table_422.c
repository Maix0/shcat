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
	v->a[42200] = sym_file_redirect;
	v->a[42201] = sym_heredoc_redirect;
	v->a[42202] = aux_sym_redirected_statement_repeat1;
	v->a[42203] = actions(690);
	v->a[42204] = 9;
	v->a[42205] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42206] = anon_sym_DOLLAR;
	v->a[42207] = anon_sym_DQUOTE;
	v->a[42208] = sym_raw_string;
	v->a[42209] = sym_number;
	v->a[42210] = anon_sym_DOLLAR_LBRACE;
	v->a[42211] = anon_sym_DOLLAR_LPAREN;
	v->a[42212] = anon_sym_BQUOTE;
	v->a[42213] = sym_word;
	v->a[42214] = actions(692);
	v->a[42215] = 12;
	v->a[42216] = anon_sym_PIPE;
	v->a[42217] = anon_sym_AMP_AMP;
	v->a[42218] = anon_sym_PIPE_PIPE;
	v->a[42219] = anon_sym_LT;
	small_parse_table_2111(v);
}

void	small_parse_table_2111(t_small_parse_table_array *v)
{
	v->a[42220] = anon_sym_GT;
	v->a[42221] = anon_sym_GT_GT;
	v->a[42222] = anon_sym_LT_AMP;
	v->a[42223] = anon_sym_GT_AMP;
	v->a[42224] = anon_sym_GT_PIPE;
	v->a[42225] = anon_sym_LT_GT;
	v->a[42226] = anon_sym_LT_LT;
	v->a[42227] = anon_sym_LT_LT_DASH;
	v->a[42228] = 4;
	v->a[42229] = actions(3);
	v->a[42230] = 1;
	v->a[42231] = sym_comment;
	v->a[42232] = actions(1426);
	v->a[42233] = 2;
	v->a[42234] = sym_file_descriptor;
	v->a[42235] = sym_variable_name;
	v->a[42236] = actions(1483);
	v->a[42237] = 2;
	v->a[42238] = anon_sym_RPAREN;
	v->a[42239] = anon_sym_SEMI_SEMI;
	small_parse_table_2112(v);
}

void	small_parse_table_2112(t_small_parse_table_array *v)
{
	v->a[42240] = actions(1422);
	v->a[42241] = 24;
	v->a[42242] = anon_sym_for;
	v->a[42243] = anon_sym_while;
	v->a[42244] = anon_sym_until;
	v->a[42245] = anon_sym_if;
	v->a[42246] = anon_sym_case;
	v->a[42247] = anon_sym_LPAREN;
	v->a[42248] = anon_sym_LBRACE;
	v->a[42249] = anon_sym_BANG;
	v->a[42250] = anon_sym_LT;
	v->a[42251] = anon_sym_GT;
	v->a[42252] = anon_sym_GT_GT;
	v->a[42253] = anon_sym_LT_AMP;
	v->a[42254] = anon_sym_GT_AMP;
	v->a[42255] = anon_sym_GT_PIPE;
	v->a[42256] = anon_sym_LT_GT;
	v->a[42257] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42258] = anon_sym_DOLLAR;
	v->a[42259] = anon_sym_DQUOTE;
	small_parse_table_2113(v);
}

void	small_parse_table_2113(t_small_parse_table_array *v)
{
	v->a[42260] = sym_raw_string;
	v->a[42261] = sym_number;
	v->a[42262] = anon_sym_DOLLAR_LBRACE;
	v->a[42263] = anon_sym_DOLLAR_LPAREN;
	v->a[42264] = anon_sym_BQUOTE;
	v->a[42265] = sym_word;
	v->a[42266] = 3;
	v->a[42267] = actions(3);
	v->a[42268] = 1;
	v->a[42269] = sym_comment;
	v->a[42270] = actions(1467);
	v->a[42271] = 2;
	v->a[42272] = sym_file_descriptor;
	v->a[42273] = sym__bare_dollar;
	v->a[42274] = actions(1469);
	v->a[42275] = 26;
	v->a[42276] = anon_sym_PIPE;
	v->a[42277] = anon_sym_RPAREN;
	v->a[42278] = anon_sym_SEMI_SEMI;
	v->a[42279] = anon_sym_AMP_AMP;
	small_parse_table_2114(v);
}

void	small_parse_table_2114(t_small_parse_table_array *v)
{
	v->a[42280] = anon_sym_PIPE_PIPE;
	v->a[42281] = anon_sym_LT;
	v->a[42282] = anon_sym_GT;
	v->a[42283] = anon_sym_GT_GT;
	v->a[42284] = anon_sym_LT_AMP;
	v->a[42285] = anon_sym_GT_AMP;
	v->a[42286] = anon_sym_GT_PIPE;
	v->a[42287] = anon_sym_LT_GT;
	v->a[42288] = anon_sym_LT_LT;
	v->a[42289] = anon_sym_LT_LT_DASH;
	v->a[42290] = aux_sym_heredoc_redirect_token1;
	v->a[42291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42292] = anon_sym_AMP;
	v->a[42293] = anon_sym_DOLLAR;
	v->a[42294] = anon_sym_DQUOTE;
	v->a[42295] = sym_raw_string;
	v->a[42296] = sym_number;
	v->a[42297] = anon_sym_DOLLAR_LBRACE;
	v->a[42298] = anon_sym_DOLLAR_LPAREN;
	v->a[42299] = anon_sym_BQUOTE;
	small_parse_table_2115(v);
}

/* EOF small_parse_table_422.c */
