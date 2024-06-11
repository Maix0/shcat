/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_322.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1610(t_small_parse_table_array *v)
{
	v->a[32200] = anon_sym_DQUOTE;
	v->a[32201] = actions(624);
	v->a[32202] = 1;
	v->a[32203] = anon_sym_DOLLAR_LBRACE;
	v->a[32204] = actions(627);
	v->a[32205] = 1;
	v->a[32206] = anon_sym_DOLLAR_LPAREN;
	v->a[32207] = actions(630);
	v->a[32208] = 1;
	v->a[32209] = anon_sym_BQUOTE;
	v->a[32210] = actions(559);
	v->a[32211] = 2;
	v->a[32212] = sym_file_descriptor;
	v->a[32213] = sym_variable_name;
	v->a[32214] = state(389);
	v->a[32215] = 2;
	v->a[32216] = sym_concatenation;
	v->a[32217] = aux_sym_for_statement_repeat1;
	v->a[32218] = actions(1249);
	v->a[32219] = 3;
	small_parse_table_1611(v);
}

void	small_parse_table_1611(t_small_parse_table_array *v)
{
	v->a[32220] = sym_raw_string;
	v->a[32221] = sym_number;
	v->a[32222] = sym_word;
	v->a[32223] = state(909);
	v->a[32224] = 5;
	v->a[32225] = sym_arithmetic_expansion;
	v->a[32226] = sym_string;
	v->a[32227] = sym_simple_expansion;
	v->a[32228] = sym_expansion;
	v->a[32229] = sym_command_substitution;
	v->a[32230] = actions(564);
	v->a[32231] = 16;
	v->a[32232] = anon_sym_PIPE;
	v->a[32233] = anon_sym_AMP_AMP;
	v->a[32234] = anon_sym_PIPE_PIPE;
	v->a[32235] = anon_sym_LT;
	v->a[32236] = anon_sym_GT;
	v->a[32237] = anon_sym_GT_GT;
	v->a[32238] = anon_sym_AMP_GT;
	v->a[32239] = anon_sym_AMP_GT_GT;
	small_parse_table_1612(v);
}

void	small_parse_table_1612(t_small_parse_table_array *v)
{
	v->a[32240] = anon_sym_LT_AMP;
	v->a[32241] = anon_sym_GT_AMP;
	v->a[32242] = anon_sym_GT_PIPE;
	v->a[32243] = anon_sym_LT_AMP_DASH;
	v->a[32244] = anon_sym_GT_AMP_DASH;
	v->a[32245] = anon_sym_LT_LT;
	v->a[32246] = anon_sym_LT_LT_DASH;
	v->a[32247] = aux_sym_heredoc_redirect_token1;
	v->a[32248] = 6;
	v->a[32249] = actions(3);
	v->a[32250] = 1;
	v->a[32251] = sym_comment;
	v->a[32252] = actions(1217);
	v->a[32253] = 1;
	v->a[32254] = aux_sym_concatenation_token1;
	v->a[32255] = actions(1252);
	v->a[32256] = 1;
	v->a[32257] = sym__concat;
	v->a[32258] = state(401);
	v->a[32259] = 1;
	small_parse_table_1613(v);
}

void	small_parse_table_1613(t_small_parse_table_array *v)
{
	v->a[32260] = aux_sym_concatenation_repeat1;
	v->a[32261] = actions(972);
	v->a[32262] = 2;
	v->a[32263] = sym_file_descriptor;
	v->a[32264] = sym_variable_name;
	v->a[32265] = actions(974);
	v->a[32266] = 29;
	v->a[32267] = anon_sym_esac;
	v->a[32268] = anon_sym_PIPE;
	v->a[32269] = anon_sym_SEMI_SEMI;
	v->a[32270] = anon_sym_AMP_AMP;
	v->a[32271] = anon_sym_PIPE_PIPE;
	v->a[32272] = anon_sym_LT;
	v->a[32273] = anon_sym_GT;
	v->a[32274] = anon_sym_GT_GT;
	v->a[32275] = anon_sym_AMP_GT;
	v->a[32276] = anon_sym_AMP_GT_GT;
	v->a[32277] = anon_sym_LT_AMP;
	v->a[32278] = anon_sym_GT_AMP;
	v->a[32279] = anon_sym_GT_PIPE;
	small_parse_table_1614(v);
}

void	small_parse_table_1614(t_small_parse_table_array *v)
{
	v->a[32280] = anon_sym_LT_AMP_DASH;
	v->a[32281] = anon_sym_GT_AMP_DASH;
	v->a[32282] = anon_sym_LT_LT;
	v->a[32283] = anon_sym_LT_LT_DASH;
	v->a[32284] = aux_sym_heredoc_redirect_token1;
	v->a[32285] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32286] = anon_sym_AMP;
	v->a[32287] = anon_sym_DOLLAR;
	v->a[32288] = anon_sym_DQUOTE;
	v->a[32289] = sym_raw_string;
	v->a[32290] = sym_number;
	v->a[32291] = anon_sym_DOLLAR_LBRACE;
	v->a[32292] = anon_sym_DOLLAR_LPAREN;
	v->a[32293] = anon_sym_BQUOTE;
	v->a[32294] = sym_word;
	v->a[32295] = anon_sym_SEMI;
	v->a[32296] = 3;
	v->a[32297] = actions(1094);
	v->a[32298] = 1;
	v->a[32299] = sym_comment;
	small_parse_table_1615(v);
}

/* EOF small_parse_table_322.c */
