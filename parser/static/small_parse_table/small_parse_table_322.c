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
	v->a[32200] = anon_sym_esac;
	v->a[32201] = anon_sym_PIPE;
	v->a[32202] = anon_sym_SEMI_SEMI;
	v->a[32203] = anon_sym_SEMI_AMP;
	v->a[32204] = anon_sym_SEMI_SEMI_AMP;
	v->a[32205] = anon_sym_PIPE_AMP;
	v->a[32206] = anon_sym_AMP_AMP;
	v->a[32207] = anon_sym_PIPE_PIPE;
	v->a[32208] = anon_sym_LT;
	v->a[32209] = anon_sym_GT;
	v->a[32210] = anon_sym_GT_GT;
	v->a[32211] = anon_sym_AMP_GT;
	v->a[32212] = anon_sym_AMP_GT_GT;
	v->a[32213] = anon_sym_LT_AMP;
	v->a[32214] = anon_sym_GT_AMP;
	v->a[32215] = anon_sym_GT_PIPE;
	v->a[32216] = anon_sym_LT_AMP_DASH;
	v->a[32217] = anon_sym_GT_AMP_DASH;
	v->a[32218] = anon_sym_LT_LT;
	v->a[32219] = anon_sym_LT_LT_DASH;
	small_parse_table_1611(v);
}

void	small_parse_table_1611(t_small_parse_table_array *v)
{
	v->a[32220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32221] = anon_sym_AMP;
	v->a[32222] = aux_sym_concatenation_token1;
	v->a[32223] = anon_sym_DOLLAR;
	v->a[32224] = sym__special_character;
	v->a[32225] = anon_sym_DQUOTE;
	v->a[32226] = sym_raw_string;
	v->a[32227] = aux_sym_number_token1;
	v->a[32228] = aux_sym_number_token2;
	v->a[32229] = anon_sym_DOLLAR_LBRACE;
	v->a[32230] = anon_sym_DOLLAR_LPAREN;
	v->a[32231] = anon_sym_BQUOTE;
	v->a[32232] = anon_sym_DOLLAR_BQUOTE;
	v->a[32233] = aux_sym__simple_variable_name_token1;
	v->a[32234] = sym_word;
	v->a[32235] = anon_sym_SEMI;
	v->a[32236] = 3;
	v->a[32237] = actions(3);
	v->a[32238] = 1;
	v->a[32239] = sym_comment;
	small_parse_table_1612(v);
}

void	small_parse_table_1612(t_small_parse_table_array *v)
{
	v->a[32240] = actions(3159);
	v->a[32241] = 6;
	v->a[32242] = sym_file_descriptor;
	v->a[32243] = sym__concat;
	v->a[32244] = sym_test_operator;
	v->a[32245] = sym__bare_dollar;
	v->a[32246] = sym__brace_start;
	v->a[32247] = aux_sym_heredoc_redirect_token1;
	v->a[32248] = actions(3157);
	v->a[32249] = 35;
	v->a[32250] = anon_sym_esac;
	v->a[32251] = anon_sym_PIPE;
	v->a[32252] = anon_sym_SEMI_SEMI;
	v->a[32253] = anon_sym_SEMI_AMP;
	v->a[32254] = anon_sym_SEMI_SEMI_AMP;
	v->a[32255] = anon_sym_PIPE_AMP;
	v->a[32256] = anon_sym_AMP_AMP;
	v->a[32257] = anon_sym_PIPE_PIPE;
	v->a[32258] = anon_sym_LT;
	v->a[32259] = anon_sym_GT;
	small_parse_table_1613(v);
}

void	small_parse_table_1613(t_small_parse_table_array *v)
{
	v->a[32260] = anon_sym_GT_GT;
	v->a[32261] = anon_sym_AMP_GT;
	v->a[32262] = anon_sym_AMP_GT_GT;
	v->a[32263] = anon_sym_LT_AMP;
	v->a[32264] = anon_sym_GT_AMP;
	v->a[32265] = anon_sym_GT_PIPE;
	v->a[32266] = anon_sym_LT_AMP_DASH;
	v->a[32267] = anon_sym_GT_AMP_DASH;
	v->a[32268] = anon_sym_LT_LT;
	v->a[32269] = anon_sym_LT_LT_DASH;
	v->a[32270] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32271] = anon_sym_AMP;
	v->a[32272] = aux_sym_concatenation_token1;
	v->a[32273] = anon_sym_DOLLAR;
	v->a[32274] = sym__special_character;
	v->a[32275] = anon_sym_DQUOTE;
	v->a[32276] = sym_raw_string;
	v->a[32277] = aux_sym_number_token1;
	v->a[32278] = aux_sym_number_token2;
	v->a[32279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1614(v);
}

void	small_parse_table_1614(t_small_parse_table_array *v)
{
	v->a[32280] = anon_sym_DOLLAR_LPAREN;
	v->a[32281] = anon_sym_BQUOTE;
	v->a[32282] = anon_sym_DOLLAR_BQUOTE;
	v->a[32283] = sym_word;
	v->a[32284] = anon_sym_SEMI;
	v->a[32285] = 3;
	v->a[32286] = actions(3);
	v->a[32287] = 1;
	v->a[32288] = sym_comment;
	v->a[32289] = actions(3062);
	v->a[32290] = 6;
	v->a[32291] = sym_file_descriptor;
	v->a[32292] = sym__concat;
	v->a[32293] = sym_variable_name;
	v->a[32294] = sym_test_operator;
	v->a[32295] = sym__brace_start;
	v->a[32296] = aux_sym_heredoc_redirect_token1;
	v->a[32297] = actions(3060);
	v->a[32298] = 35;
	v->a[32299] = anon_sym_esac;
	small_parse_table_1615(v);
}

/* EOF small_parse_table_322.c */
