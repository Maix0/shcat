/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1052.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5260(t_small_parse_table_array *v)
{
	v->a[105200] = anon_sym_PIPE;
	v->a[105201] = anon_sym_SEMI_SEMI;
	v->a[105202] = anon_sym_SEMI_AMP;
	v->a[105203] = anon_sym_SEMI_SEMI_AMP;
	v->a[105204] = anon_sym_PIPE_AMP;
	v->a[105205] = anon_sym_AMP_AMP;
	v->a[105206] = anon_sym_PIPE_PIPE;
	v->a[105207] = anon_sym_LT;
	v->a[105208] = anon_sym_GT;
	v->a[105209] = anon_sym_GT_GT;
	v->a[105210] = anon_sym_AMP_GT;
	v->a[105211] = anon_sym_AMP_GT_GT;
	v->a[105212] = anon_sym_LT_AMP;
	v->a[105213] = anon_sym_GT_AMP;
	v->a[105214] = anon_sym_GT_PIPE;
	v->a[105215] = anon_sym_LT_AMP_DASH;
	v->a[105216] = anon_sym_GT_AMP_DASH;
	v->a[105217] = anon_sym_LT_LT;
	v->a[105218] = anon_sym_LT_LT_DASH;
	v->a[105219] = anon_sym_AMP;
	small_parse_table_5261(v);
}

void	small_parse_table_5261(t_small_parse_table_array *v)
{
	v->a[105220] = anon_sym_SEMI;
	v->a[105221] = 17;
	v->a[105222] = actions(57);
	v->a[105223] = 1;
	v->a[105224] = sym_comment;
	v->a[105225] = actions(2460);
	v->a[105226] = 1;
	v->a[105227] = anon_sym_DOLLAR;
	v->a[105228] = actions(2466);
	v->a[105229] = 1;
	v->a[105230] = aux_sym_number_token1;
	v->a[105231] = actions(2468);
	v->a[105232] = 1;
	v->a[105233] = aux_sym_number_token2;
	v->a[105234] = actions(2472);
	v->a[105235] = 1;
	v->a[105236] = anon_sym_DOLLAR_LPAREN;
	v->a[105237] = actions(2482);
	v->a[105238] = 1;
	v->a[105239] = sym__brace_start;
	small_parse_table_5262(v);
}

void	small_parse_table_5262(t_small_parse_table_array *v)
{
	v->a[105240] = actions(5066);
	v->a[105241] = 1;
	v->a[105242] = sym_word;
	v->a[105243] = actions(6051);
	v->a[105244] = 1;
	v->a[105245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105246] = actions(6053);
	v->a[105247] = 1;
	v->a[105248] = sym__special_character;
	v->a[105249] = actions(6055);
	v->a[105250] = 1;
	v->a[105251] = anon_sym_DQUOTE;
	v->a[105252] = actions(6057);
	v->a[105253] = 1;
	v->a[105254] = anon_sym_DOLLAR_LBRACE;
	v->a[105255] = actions(6059);
	v->a[105256] = 1;
	v->a[105257] = anon_sym_BQUOTE;
	v->a[105258] = actions(6061);
	v->a[105259] = 1;
	small_parse_table_5263(v);
}

void	small_parse_table_5263(t_small_parse_table_array *v)
{
	v->a[105260] = anon_sym_DOLLAR_BQUOTE;
	v->a[105261] = state(2666);
	v->a[105262] = 1;
	v->a[105263] = aux_sym__literal_repeat1;
	v->a[105264] = actions(5074);
	v->a[105265] = 2;
	v->a[105266] = sym_test_operator;
	v->a[105267] = sym_raw_string;
	v->a[105268] = state(1857);
	v->a[105269] = 2;
	v->a[105270] = sym_concatenation;
	v->a[105271] = aux_sym_for_statement_repeat1;
	v->a[105272] = state(2609);
	v->a[105273] = 7;
	v->a[105274] = sym_arithmetic_expansion;
	v->a[105275] = sym_brace_expression;
	v->a[105276] = sym_string;
	v->a[105277] = sym_number;
	v->a[105278] = sym_simple_expansion;
	v->a[105279] = sym_expansion;
	small_parse_table_5264(v);
}

void	small_parse_table_5264(t_small_parse_table_array *v)
{
	v->a[105280] = sym_command_substitution;
	v->a[105281] = 3;
	v->a[105282] = actions(3);
	v->a[105283] = 1;
	v->a[105284] = sym_comment;
	v->a[105285] = actions(6065);
	v->a[105286] = 2;
	v->a[105287] = sym_file_descriptor;
	v->a[105288] = aux_sym_heredoc_redirect_token1;
	v->a[105289] = actions(6063);
	v->a[105290] = 22;
	v->a[105291] = anon_sym_esac;
	v->a[105292] = anon_sym_PIPE;
	v->a[105293] = anon_sym_SEMI_SEMI;
	v->a[105294] = anon_sym_SEMI_AMP;
	v->a[105295] = anon_sym_SEMI_SEMI_AMP;
	v->a[105296] = anon_sym_PIPE_AMP;
	v->a[105297] = anon_sym_AMP_AMP;
	v->a[105298] = anon_sym_PIPE_PIPE;
	v->a[105299] = anon_sym_LT;
	small_parse_table_5265(v);
}

/* EOF small_parse_table_1052.c */
