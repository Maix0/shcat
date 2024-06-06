/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1032.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5160(t_small_parse_table_array *v)
{
	v->a[103200] = actions(4558);
	v->a[103201] = 1;
	v->a[103202] = anon_sym_BQUOTE;
	v->a[103203] = actions(4560);
	v->a[103204] = 1;
	v->a[103205] = anon_sym_DOLLAR_BQUOTE;
	v->a[103206] = actions(5944);
	v->a[103207] = 1;
	v->a[103208] = sym_word;
	v->a[103209] = state(3423);
	v->a[103210] = 1;
	v->a[103211] = aux_sym__literal_repeat1;
	v->a[103212] = actions(5946);
	v->a[103213] = 2;
	v->a[103214] = sym_test_operator;
	v->a[103215] = sym_raw_string;
	v->a[103216] = state(3558);
	v->a[103217] = 2;
	v->a[103218] = sym_concatenation;
	v->a[103219] = sym__extglob_blob;
	small_parse_table_5161(v);
}

void	small_parse_table_5161(t_small_parse_table_array *v)
{
	v->a[103220] = state(3404);
	v->a[103221] = 7;
	v->a[103222] = sym_arithmetic_expansion;
	v->a[103223] = sym_brace_expression;
	v->a[103224] = sym_string;
	v->a[103225] = sym_number;
	v->a[103226] = sym_simple_expansion;
	v->a[103227] = sym_expansion;
	v->a[103228] = sym_command_substitution;
	v->a[103229] = 3;
	v->a[103230] = actions(3);
	v->a[103231] = 1;
	v->a[103232] = sym_comment;
	v->a[103233] = actions(3066);
	v->a[103234] = 3;
	v->a[103235] = sym_file_descriptor;
	v->a[103236] = sym__concat;
	v->a[103237] = aux_sym_heredoc_redirect_token1;
	v->a[103238] = actions(3064);
	v->a[103239] = 22;
	small_parse_table_5162(v);
}

void	small_parse_table_5162(t_small_parse_table_array *v)
{
	v->a[103240] = anon_sym_PIPE;
	v->a[103241] = anon_sym_SEMI_SEMI;
	v->a[103242] = anon_sym_SEMI_AMP;
	v->a[103243] = anon_sym_SEMI_SEMI_AMP;
	v->a[103244] = anon_sym_PIPE_AMP;
	v->a[103245] = anon_sym_AMP_AMP;
	v->a[103246] = anon_sym_PIPE_PIPE;
	v->a[103247] = anon_sym_LT;
	v->a[103248] = anon_sym_GT;
	v->a[103249] = anon_sym_GT_GT;
	v->a[103250] = anon_sym_AMP_GT;
	v->a[103251] = anon_sym_AMP_GT_GT;
	v->a[103252] = anon_sym_LT_AMP;
	v->a[103253] = anon_sym_GT_AMP;
	v->a[103254] = anon_sym_GT_PIPE;
	v->a[103255] = anon_sym_LT_AMP_DASH;
	v->a[103256] = anon_sym_GT_AMP_DASH;
	v->a[103257] = anon_sym_LT_LT;
	v->a[103258] = anon_sym_LT_LT_DASH;
	v->a[103259] = anon_sym_AMP;
	small_parse_table_5163(v);
}

void	small_parse_table_5163(t_small_parse_table_array *v)
{
	v->a[103260] = aux_sym_concatenation_token1;
	v->a[103261] = anon_sym_SEMI;
	v->a[103262] = 3;
	v->a[103263] = actions(3);
	v->a[103264] = 1;
	v->a[103265] = sym_comment;
	v->a[103266] = actions(3159);
	v->a[103267] = 3;
	v->a[103268] = sym_file_descriptor;
	v->a[103269] = sym__concat;
	v->a[103270] = aux_sym_heredoc_redirect_token1;
	v->a[103271] = actions(3157);
	v->a[103272] = 22;
	v->a[103273] = anon_sym_PIPE;
	v->a[103274] = anon_sym_SEMI_SEMI;
	v->a[103275] = anon_sym_SEMI_AMP;
	v->a[103276] = anon_sym_SEMI_SEMI_AMP;
	v->a[103277] = anon_sym_PIPE_AMP;
	v->a[103278] = anon_sym_AMP_AMP;
	v->a[103279] = anon_sym_PIPE_PIPE;
	small_parse_table_5164(v);
}

void	small_parse_table_5164(t_small_parse_table_array *v)
{
	v->a[103280] = anon_sym_LT;
	v->a[103281] = anon_sym_GT;
	v->a[103282] = anon_sym_GT_GT;
	v->a[103283] = anon_sym_AMP_GT;
	v->a[103284] = anon_sym_AMP_GT_GT;
	v->a[103285] = anon_sym_LT_AMP;
	v->a[103286] = anon_sym_GT_AMP;
	v->a[103287] = anon_sym_GT_PIPE;
	v->a[103288] = anon_sym_LT_AMP_DASH;
	v->a[103289] = anon_sym_GT_AMP_DASH;
	v->a[103290] = anon_sym_LT_LT;
	v->a[103291] = anon_sym_LT_LT_DASH;
	v->a[103292] = anon_sym_AMP;
	v->a[103293] = aux_sym_concatenation_token1;
	v->a[103294] = anon_sym_SEMI;
	v->a[103295] = 3;
	v->a[103296] = actions(3);
	v->a[103297] = 1;
	v->a[103298] = sym_comment;
	v->a[103299] = actions(2664);
	small_parse_table_5165(v);
}

/* EOF small_parse_table_1032.c */
