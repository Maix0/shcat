/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_262.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1310(t_small_parse_table_array *v)
{
	v->a[26200] = sym_comment;
	v->a[26201] = actions(4266);
	v->a[26202] = 1;
	v->a[26203] = aux_sym_concatenation_token1;
	v->a[26204] = actions(4268);
	v->a[26205] = 1;
	v->a[26206] = sym__concat;
	v->a[26207] = state(820);
	v->a[26208] = 1;
	v->a[26209] = aux_sym_concatenation_repeat1;
	v->a[26210] = actions(1267);
	v->a[26211] = 5;
	v->a[26212] = sym_file_descriptor;
	v->a[26213] = sym_test_operator;
	v->a[26214] = sym__bare_dollar;
	v->a[26215] = sym__brace_start;
	v->a[26216] = aux_sym_heredoc_redirect_token1;
	v->a[26217] = actions(1265);
	v->a[26218] = 43;
	v->a[26219] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = anon_sym_SEMI;
	v->a[26221] = anon_sym_PIPE_PIPE;
	v->a[26222] = anon_sym_AMP_AMP;
	v->a[26223] = anon_sym_PIPE;
	v->a[26224] = anon_sym_AMP;
	v->a[26225] = anon_sym_EQ_EQ;
	v->a[26226] = anon_sym_LT;
	v->a[26227] = anon_sym_GT;
	v->a[26228] = anon_sym_LT_LT;
	v->a[26229] = anon_sym_GT_GT;
	v->a[26230] = anon_sym_LPAREN;
	v->a[26231] = anon_sym_esac;
	v->a[26232] = anon_sym_SEMI_SEMI;
	v->a[26233] = anon_sym_SEMI_AMP;
	v->a[26234] = anon_sym_SEMI_SEMI_AMP;
	v->a[26235] = anon_sym_PIPE_AMP;
	v->a[26236] = anon_sym_EQ_TILDE;
	v->a[26237] = anon_sym_AMP_GT;
	v->a[26238] = anon_sym_AMP_GT_GT;
	v->a[26239] = anon_sym_LT_AMP;
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = anon_sym_GT_AMP;
	v->a[26241] = anon_sym_GT_PIPE;
	v->a[26242] = anon_sym_LT_AMP_DASH;
	v->a[26243] = anon_sym_GT_AMP_DASH;
	v->a[26244] = anon_sym_LT_LT_DASH;
	v->a[26245] = anon_sym_LT_LT_LT;
	v->a[26246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26247] = anon_sym_DOLLAR_LBRACK;
	v->a[26248] = anon_sym_DOLLAR;
	v->a[26249] = sym__special_character;
	v->a[26250] = anon_sym_DQUOTE;
	v->a[26251] = sym_raw_string;
	v->a[26252] = sym_ansi_c_string;
	v->a[26253] = aux_sym_number_token1;
	v->a[26254] = aux_sym_number_token2;
	v->a[26255] = anon_sym_DOLLAR_LBRACE;
	v->a[26256] = anon_sym_DOLLAR_LPAREN;
	v->a[26257] = anon_sym_BQUOTE;
	v->a[26258] = anon_sym_DOLLAR_BQUOTE;
	v->a[26259] = anon_sym_LT_LPAREN;
	small_parse_table_1313(v);
}

void	small_parse_table_1313(t_small_parse_table_array *v)
{
	v->a[26260] = anon_sym_GT_LPAREN;
	v->a[26261] = sym_word;
	v->a[26262] = 10;
	v->a[26263] = actions(3);
	v->a[26264] = 1;
	v->a[26265] = sym_comment;
	v->a[26266] = actions(4263);
	v->a[26267] = 1;
	v->a[26268] = sym_variable_name;
	v->a[26269] = actions(4272);
	v->a[26270] = 1;
	v->a[26271] = aux_sym_heredoc_redirect_token1;
	v->a[26272] = state(6726);
	v->a[26273] = 1;
	v->a[26274] = sym_subscript;
	v->a[26275] = actions(4253);
	v->a[26276] = 2;
	v->a[26277] = anon_sym_PIPE;
	v->a[26278] = anon_sym_PIPE_AMP;
	v->a[26279] = state(4237);
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = 2;
	v->a[26281] = sym_variable_assignment;
	v->a[26282] = aux_sym_variable_assignments_repeat1;
	v->a[26283] = actions(4261);
	v->a[26284] = 3;
	v->a[26285] = sym_file_descriptor;
	v->a[26286] = sym_test_operator;
	v->a[26287] = sym__brace_start;
	v->a[26288] = state(4283);
	v->a[26289] = 3;
	v->a[26290] = sym_file_redirect;
	v->a[26291] = sym_heredoc_redirect;
	v->a[26292] = aux_sym_redirected_statement_repeat1;
	v->a[26293] = actions(4270);
	v->a[26294] = 10;
	v->a[26295] = anon_sym_SEMI;
	v->a[26296] = anon_sym_PIPE_PIPE;
	v->a[26297] = anon_sym_AMP_AMP;
	v->a[26298] = anon_sym_AMP;
	v->a[26299] = anon_sym_LT_LT;
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
