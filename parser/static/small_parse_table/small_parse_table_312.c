/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_312.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1560(t_small_parse_table_array *v)
{
	v->a[31200] = anon_sym_BQUOTE;
	v->a[31201] = actions(75);
	v->a[31202] = 1;
	v->a[31203] = sym_variable_name;
	v->a[31204] = actions(1068);
	v->a[31205] = 1;
	v->a[31206] = sym_file_descriptor;
	v->a[31207] = state(191);
	v->a[31208] = 1;
	v->a[31209] = sym_command_name;
	v->a[31210] = state(624);
	v->a[31211] = 1;
	v->a[31212] = sym_concatenation;
	v->a[31213] = state(733);
	v->a[31214] = 1;
	v->a[31215] = aux_sym_command_repeat1;
	v->a[31216] = state(747);
	v->a[31217] = 1;
	v->a[31218] = sym_variable_assignment;
	v->a[31219] = state(1283);
	small_parse_table_1561(v);
}

void	small_parse_table_1561(t_small_parse_table_array *v)
{
	v->a[31220] = 1;
	v->a[31221] = sym_subshell;
	v->a[31222] = state(1298);
	v->a[31223] = 1;
	v->a[31224] = sym_command;
	v->a[31225] = state(1343);
	v->a[31226] = 1;
	v->a[31227] = sym_file_redirect;
	v->a[31228] = actions(1066);
	v->a[31229] = 2;
	v->a[31230] = anon_sym_LT_AMP_DASH;
	v->a[31231] = anon_sym_GT_AMP_DASH;
	v->a[31232] = actions(65);
	v->a[31233] = 3;
	v->a[31234] = sym_raw_string;
	v->a[31235] = sym_number;
	v->a[31236] = sym_word;
	v->a[31237] = state(420);
	v->a[31238] = 5;
	v->a[31239] = sym_arithmetic_expansion;
	small_parse_table_1562(v);
}

void	small_parse_table_1562(t_small_parse_table_array *v)
{
	v->a[31240] = sym_string;
	v->a[31241] = sym_simple_expansion;
	v->a[31242] = sym_expansion;
	v->a[31243] = sym_command_substitution;
	v->a[31244] = actions(1064);
	v->a[31245] = 8;
	v->a[31246] = anon_sym_LT;
	v->a[31247] = anon_sym_GT;
	v->a[31248] = anon_sym_GT_GT;
	v->a[31249] = anon_sym_AMP_GT;
	v->a[31250] = anon_sym_AMP_GT_GT;
	v->a[31251] = anon_sym_LT_AMP;
	v->a[31252] = anon_sym_GT_AMP;
	v->a[31253] = anon_sym_GT_PIPE;
	v->a[31254] = 3;
	v->a[31255] = actions(3);
	v->a[31256] = 1;
	v->a[31257] = sym_comment;
	v->a[31258] = actions(1100);
	v->a[31259] = 3;
	small_parse_table_1563(v);
}

void	small_parse_table_1563(t_small_parse_table_array *v)
{
	v->a[31260] = sym_file_descriptor;
	v->a[31261] = sym__concat;
	v->a[31262] = sym__bare_dollar;
	v->a[31263] = actions(1098);
	v->a[31264] = 31;
	v->a[31265] = anon_sym_esac;
	v->a[31266] = anon_sym_LPAREN;
	v->a[31267] = anon_sym_PIPE;
	v->a[31268] = anon_sym_SEMI_SEMI;
	v->a[31269] = anon_sym_AMP_AMP;
	v->a[31270] = anon_sym_PIPE_PIPE;
	v->a[31271] = anon_sym_LT;
	v->a[31272] = anon_sym_GT;
	v->a[31273] = anon_sym_GT_GT;
	v->a[31274] = anon_sym_AMP_GT;
	v->a[31275] = anon_sym_AMP_GT_GT;
	v->a[31276] = anon_sym_LT_AMP;
	v->a[31277] = anon_sym_GT_AMP;
	v->a[31278] = anon_sym_GT_PIPE;
	v->a[31279] = anon_sym_LT_AMP_DASH;
	small_parse_table_1564(v);
}

void	small_parse_table_1564(t_small_parse_table_array *v)
{
	v->a[31280] = anon_sym_GT_AMP_DASH;
	v->a[31281] = anon_sym_LT_LT;
	v->a[31282] = anon_sym_LT_LT_DASH;
	v->a[31283] = aux_sym_heredoc_redirect_token1;
	v->a[31284] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31285] = anon_sym_AMP;
	v->a[31286] = aux_sym_concatenation_token1;
	v->a[31287] = anon_sym_DOLLAR;
	v->a[31288] = anon_sym_DQUOTE;
	v->a[31289] = sym_raw_string;
	v->a[31290] = sym_number;
	v->a[31291] = anon_sym_DOLLAR_LBRACE;
	v->a[31292] = anon_sym_DOLLAR_LPAREN;
	v->a[31293] = anon_sym_BQUOTE;
	v->a[31294] = sym_word;
	v->a[31295] = anon_sym_SEMI;
	v->a[31296] = 3;
	v->a[31297] = actions(3);
	v->a[31298] = 1;
	v->a[31299] = sym_comment;
	small_parse_table_1565(v);
}

/* EOF small_parse_table_312.c */
