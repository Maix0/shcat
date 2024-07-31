/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_182.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_910(t_small_parse_table_array *v)
{
	v->a[18200] = 1;
	v->a[18201] = sym_concatenation;
	v->a[18202] = actions(495);
	v->a[18203] = 3;
	v->a[18204] = sym_raw_string;
	v->a[18205] = sym_number;
	v->a[18206] = sym_word;
	v->a[18207] = state(357);
	v->a[18208] = 5;
	v->a[18209] = sym_arithmetic_expansion;
	v->a[18210] = sym_string;
	v->a[18211] = sym_simple_expansion;
	v->a[18212] = sym_expansion;
	v->a[18213] = sym_command_substitution;
	v->a[18214] = actions(497);
	v->a[18215] = 16;
	v->a[18216] = anon_sym_esac;
	v->a[18217] = anon_sym_PIPE;
	v->a[18218] = anon_sym_SEMI_SEMI;
	v->a[18219] = anon_sym_AMP_AMP;
	small_parse_table_911(v);
}

void	small_parse_table_911(t_small_parse_table_array *v)
{
	v->a[18220] = anon_sym_PIPE_PIPE;
	v->a[18221] = anon_sym_LT;
	v->a[18222] = anon_sym_GT;
	v->a[18223] = anon_sym_GT_GT;
	v->a[18224] = anon_sym_LT_AMP;
	v->a[18225] = anon_sym_GT_AMP;
	v->a[18226] = anon_sym_GT_PIPE;
	v->a[18227] = anon_sym_LT_GT;
	v->a[18228] = anon_sym_LT_LT;
	v->a[18229] = anon_sym_LT_LT_DASH;
	v->a[18230] = aux_sym_heredoc_redirect_token1;
	v->a[18231] = anon_sym_SEMI;
	v->a[18232] = 14;
	v->a[18233] = actions(3);
	v->a[18234] = 1;
	v->a[18235] = sym_comment;
	v->a[18236] = actions(501);
	v->a[18237] = 1;
	v->a[18238] = ts_builtin_sym_end;
	v->a[18239] = actions(508);
	small_parse_table_912(v);
}

void	small_parse_table_912(t_small_parse_table_array *v)
{
	v->a[18240] = 1;
	v->a[18241] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18242] = actions(511);
	v->a[18243] = 1;
	v->a[18244] = anon_sym_DOLLAR;
	v->a[18245] = actions(514);
	v->a[18246] = 1;
	v->a[18247] = anon_sym_DQUOTE;
	v->a[18248] = actions(517);
	v->a[18249] = 1;
	v->a[18250] = anon_sym_DOLLAR_LBRACE;
	v->a[18251] = actions(520);
	v->a[18252] = 1;
	v->a[18253] = anon_sym_DOLLAR_LPAREN;
	v->a[18254] = actions(523);
	v->a[18255] = 1;
	v->a[18256] = anon_sym_BQUOTE;
	v->a[18257] = actions(526);
	v->a[18258] = 1;
	v->a[18259] = sym__bare_dollar;
	small_parse_table_913(v);
}

void	small_parse_table_913(t_small_parse_table_array *v)
{
	v->a[18260] = state(186);
	v->a[18261] = 1;
	v->a[18262] = aux_sym_command_repeat2;
	v->a[18263] = state(626);
	v->a[18264] = 1;
	v->a[18265] = sym_concatenation;
	v->a[18266] = actions(503);
	v->a[18267] = 3;
	v->a[18268] = sym_raw_string;
	v->a[18269] = sym_number;
	v->a[18270] = sym_word;
	v->a[18271] = state(339);
	v->a[18272] = 5;
	v->a[18273] = sym_arithmetic_expansion;
	v->a[18274] = sym_string;
	v->a[18275] = sym_simple_expansion;
	v->a[18276] = sym_expansion;
	v->a[18277] = sym_command_substitution;
	v->a[18278] = actions(506);
	v->a[18279] = 15;
	small_parse_table_914(v);
}

void	small_parse_table_914(t_small_parse_table_array *v)
{
	v->a[18280] = anon_sym_PIPE;
	v->a[18281] = anon_sym_SEMI_SEMI;
	v->a[18282] = anon_sym_AMP_AMP;
	v->a[18283] = anon_sym_PIPE_PIPE;
	v->a[18284] = anon_sym_LT;
	v->a[18285] = anon_sym_GT;
	v->a[18286] = anon_sym_GT_GT;
	v->a[18287] = anon_sym_LT_AMP;
	v->a[18288] = anon_sym_GT_AMP;
	v->a[18289] = anon_sym_GT_PIPE;
	v->a[18290] = anon_sym_LT_GT;
	v->a[18291] = anon_sym_LT_LT;
	v->a[18292] = anon_sym_LT_LT_DASH;
	v->a[18293] = aux_sym_heredoc_redirect_token1;
	v->a[18294] = anon_sym_SEMI;
	v->a[18295] = 17;
	v->a[18296] = actions(407);
	v->a[18297] = 1;
	v->a[18298] = sym_comment;
	v->a[18299] = actions(409);
	small_parse_table_915(v);
}

/* EOF small_parse_table_182.c */
