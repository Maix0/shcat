/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2872.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14360(t_small_parse_table_array *v)
{
	v->a[287200] = 1;
	v->a[287201] = aux_sym__simple_variable_name_token1;
	v->a[287202] = state(6301);
	v->a[287203] = 1;
	v->a[287204] = sym__expansion_max_length_binary_expression;
	v->a[287205] = state(6470);
	v->a[287206] = 1;
	v->a[287207] = sym__expansion_max_length_expression;
	v->a[287208] = actions(12541);
	v->a[287209] = 2;
	v->a[287210] = anon_sym_LPAREN_LPAREN;
	v->a[287211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[287212] = state(6279);
	v->a[287213] = 2;
	v->a[287214] = sym_number;
	v->a[287215] = sym_expansion;
	v->a[287216] = state(6825);
	v->a[287217] = 3;
	v->a[287218] = sym_parenthesized_expression;
	v->a[287219] = sym_arithmetic_expansion;
	small_parse_table_14361(v);
}

void	small_parse_table_14361(t_small_parse_table_array *v)
{
	v->a[287220] = sym_command_substitution;
	v->a[287221] = 3;
	v->a[287222] = actions(71);
	v->a[287223] = 1;
	v->a[287224] = sym_comment;
	v->a[287225] = actions(1308);
	v->a[287226] = 7;
	v->a[287227] = anon_sym_PIPE;
	v->a[287228] = anon_sym_LT;
	v->a[287229] = anon_sym_GT;
	v->a[287230] = anon_sym_LT_LT;
	v->a[287231] = anon_sym_AMP_GT;
	v->a[287232] = anon_sym_LT_AMP;
	v->a[287233] = anon_sym_GT_AMP;
	v->a[287234] = actions(1310);
	v->a[287235] = 13;
	v->a[287236] = sym_file_descriptor;
	v->a[287237] = sym__concat;
	v->a[287238] = anon_sym_PIPE_PIPE;
	v->a[287239] = anon_sym_AMP_AMP;
	small_parse_table_14362(v);
}

void	small_parse_table_14362(t_small_parse_table_array *v)
{
	v->a[287240] = anon_sym_GT_GT;
	v->a[287241] = anon_sym_PIPE_AMP;
	v->a[287242] = anon_sym_RBRACK;
	v->a[287243] = anon_sym_AMP_GT_GT;
	v->a[287244] = anon_sym_GT_PIPE;
	v->a[287245] = anon_sym_LT_AMP_DASH;
	v->a[287246] = anon_sym_GT_AMP_DASH;
	v->a[287247] = anon_sym_LT_LT_DASH;
	v->a[287248] = aux_sym_concatenation_token1;
	v->a[287249] = 20;
	v->a[287250] = actions(3);
	v->a[287251] = 1;
	v->a[287252] = sym_comment;
	v->a[287253] = actions(7793);
	v->a[287254] = 1;
	v->a[287255] = aux_sym_number_token1;
	v->a[287256] = actions(7795);
	v->a[287257] = 1;
	v->a[287258] = aux_sym_number_token2;
	v->a[287259] = actions(12543);
	small_parse_table_14363(v);
}

void	small_parse_table_14363(t_small_parse_table_array *v)
{
	v->a[287260] = 1;
	v->a[287261] = anon_sym_LPAREN;
	v->a[287262] = actions(12547);
	v->a[287263] = 1;
	v->a[287264] = anon_sym_DOLLAR_LBRACK;
	v->a[287265] = actions(12551);
	v->a[287266] = 1;
	v->a[287267] = anon_sym_DOLLAR_LBRACE;
	v->a[287268] = actions(12555);
	v->a[287269] = 1;
	v->a[287270] = anon_sym_DOLLAR_LPAREN;
	v->a[287271] = actions(12557);
	v->a[287272] = 1;
	v->a[287273] = anon_sym_BQUOTE;
	v->a[287274] = actions(12559);
	v->a[287275] = 1;
	v->a[287276] = anon_sym_DOLLAR_BQUOTE;
	v->a[287277] = actions(12874);
	v->a[287278] = 1;
	v->a[287279] = aux_sym_heredoc_redirect_token1;
	small_parse_table_14364(v);
}

void	small_parse_table_14364(t_small_parse_table_array *v)
{
	v->a[287280] = actions(12876);
	v->a[287281] = 1;
	v->a[287282] = anon_sym_RBRACE3;
	v->a[287283] = actions(12878);
	v->a[287284] = 1;
	v->a[287285] = aux_sym__simple_variable_name_token1;
	v->a[287286] = state(6261);
	v->a[287287] = 1;
	v->a[287288] = sym__expansion_max_length_binary_expression;
	v->a[287289] = state(6287);
	v->a[287290] = 1;
	v->a[287291] = sym_number;
	v->a[287292] = state(6299);
	v->a[287293] = 1;
	v->a[287294] = sym_expansion;
	v->a[287295] = state(6470);
	v->a[287296] = 1;
	v->a[287297] = sym__expansion_max_length_expression;
	v->a[287298] = state(7251);
	v->a[287299] = 1;
	small_parse_table_14365(v);
}

/* EOF small_parse_table_2872.c */
