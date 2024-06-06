/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_992.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4960(t_small_parse_table_array *v)
{
	v->a[99200] = state(2882);
	v->a[99201] = 1;
	v->a[99202] = sym_concatenation;
	v->a[99203] = actions(2446);
	v->a[99204] = 2;
	v->a[99205] = sym_raw_string;
	v->a[99206] = sym_word;
	v->a[99207] = state(2716);
	v->a[99208] = 7;
	v->a[99209] = sym_arithmetic_expansion;
	v->a[99210] = sym_brace_expression;
	v->a[99211] = sym_string;
	v->a[99212] = sym_number;
	v->a[99213] = sym_simple_expansion;
	v->a[99214] = sym_expansion;
	v->a[99215] = sym_command_substitution;
	v->a[99216] = 8;
	v->a[99217] = actions(3);
	v->a[99218] = 1;
	v->a[99219] = sym_comment;
	small_parse_table_4961(v);
}

void	small_parse_table_4961(t_small_parse_table_array *v)
{
	v->a[99220] = actions(5176);
	v->a[99221] = 1;
	v->a[99222] = aux_sym_heredoc_redirect_token1;
	v->a[99223] = actions(5581);
	v->a[99224] = 1;
	v->a[99225] = sym_file_descriptor;
	v->a[99226] = actions(5326);
	v->a[99227] = 2;
	v->a[99228] = anon_sym_LT_LT;
	v->a[99229] = anon_sym_LT_LT_DASH;
	v->a[99230] = actions(5578);
	v->a[99231] = 2;
	v->a[99232] = anon_sym_LT_AMP_DASH;
	v->a[99233] = anon_sym_GT_AMP_DASH;
	v->a[99234] = state(2064);
	v->a[99235] = 3;
	v->a[99236] = sym_file_redirect;
	v->a[99237] = sym_heredoc_redirect;
	v->a[99238] = aux_sym_redirected_statement_repeat1;
	v->a[99239] = actions(5165);
	small_parse_table_4962(v);
}

void	small_parse_table_4962(t_small_parse_table_array *v)
{
	v->a[99240] = 8;
	v->a[99241] = anon_sym_PIPE;
	v->a[99242] = anon_sym_SEMI_SEMI;
	v->a[99243] = anon_sym_PIPE_AMP;
	v->a[99244] = anon_sym_AMP_AMP;
	v->a[99245] = anon_sym_PIPE_PIPE;
	v->a[99246] = anon_sym_AMP;
	v->a[99247] = anon_sym_BQUOTE;
	v->a[99248] = anon_sym_SEMI;
	v->a[99249] = actions(5575);
	v->a[99250] = 8;
	v->a[99251] = anon_sym_LT;
	v->a[99252] = anon_sym_GT;
	v->a[99253] = anon_sym_GT_GT;
	v->a[99254] = anon_sym_AMP_GT;
	v->a[99255] = anon_sym_AMP_GT_GT;
	v->a[99256] = anon_sym_LT_AMP;
	v->a[99257] = anon_sym_GT_AMP;
	v->a[99258] = anon_sym_GT_PIPE;
	v->a[99259] = 19;
	small_parse_table_4963(v);
}

void	small_parse_table_4963(t_small_parse_table_array *v)
{
	v->a[99260] = actions(3);
	v->a[99261] = 1;
	v->a[99262] = sym_comment;
	v->a[99263] = actions(5334);
	v->a[99264] = 1;
	v->a[99265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99266] = actions(5336);
	v->a[99267] = 1;
	v->a[99268] = anon_sym_DOLLAR;
	v->a[99269] = actions(5340);
	v->a[99270] = 1;
	v->a[99271] = anon_sym_DQUOTE;
	v->a[99272] = actions(5344);
	v->a[99273] = 1;
	v->a[99274] = aux_sym_number_token1;
	v->a[99275] = actions(5346);
	v->a[99276] = 1;
	v->a[99277] = aux_sym_number_token2;
	v->a[99278] = actions(5348);
	v->a[99279] = 1;
	small_parse_table_4964(v);
}

void	small_parse_table_4964(t_small_parse_table_array *v)
{
	v->a[99280] = anon_sym_DOLLAR_LBRACE;
	v->a[99281] = actions(5350);
	v->a[99282] = 1;
	v->a[99283] = anon_sym_DOLLAR_LPAREN;
	v->a[99284] = actions(5352);
	v->a[99285] = 1;
	v->a[99286] = anon_sym_BQUOTE;
	v->a[99287] = actions(5354);
	v->a[99288] = 1;
	v->a[99289] = anon_sym_DOLLAR_BQUOTE;
	v->a[99290] = actions(5356);
	v->a[99291] = 1;
	v->a[99292] = sym__comment_word;
	v->a[99293] = actions(5358);
	v->a[99294] = 1;
	v->a[99295] = sym__empty_value;
	v->a[99296] = actions(5360);
	v->a[99297] = 1;
	v->a[99298] = sym__brace_start;
	v->a[99299] = actions(5584);
	small_parse_table_4965(v);
}

/* EOF small_parse_table_992.c */
