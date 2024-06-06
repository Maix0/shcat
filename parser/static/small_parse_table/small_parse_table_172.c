/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_172.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_860(t_small_parse_table_array *v)
{
	v->a[17200] = sym__special_character;
	v->a[17201] = anon_sym_DQUOTE;
	v->a[17202] = sym_raw_string;
	v->a[17203] = aux_sym_number_token1;
	v->a[17204] = aux_sym_number_token2;
	v->a[17205] = anon_sym_DOLLAR_LBRACE;
	v->a[17206] = anon_sym_DOLLAR_LPAREN;
	v->a[17207] = anon_sym_BQUOTE;
	v->a[17208] = anon_sym_DOLLAR_BQUOTE;
	v->a[17209] = sym_word;
	v->a[17210] = anon_sym_SEMI;
	v->a[17211] = 6;
	v->a[17212] = actions(3);
	v->a[17213] = 1;
	v->a[17214] = sym_comment;
	v->a[17215] = actions(2700);
	v->a[17216] = 1;
	v->a[17217] = aux_sym_concatenation_token1;
	v->a[17218] = actions(2703);
	v->a[17219] = 1;
	small_parse_table_861(v);
}

void	small_parse_table_861(t_small_parse_table_array *v)
{
	v->a[17220] = sym__concat;
	v->a[17221] = state(483);
	v->a[17222] = 1;
	v->a[17223] = aux_sym_concatenation_repeat1;
	v->a[17224] = actions(2654);
	v->a[17225] = 5;
	v->a[17226] = sym_file_descriptor;
	v->a[17227] = sym_test_operator;
	v->a[17228] = sym__bare_dollar;
	v->a[17229] = sym__brace_start;
	v->a[17230] = aux_sym_heredoc_redirect_token1;
	v->a[17231] = actions(2652);
	v->a[17232] = 35;
	v->a[17233] = anon_sym_esac;
	v->a[17234] = anon_sym_LPAREN;
	v->a[17235] = anon_sym_PIPE;
	v->a[17236] = anon_sym_SEMI_SEMI;
	v->a[17237] = anon_sym_SEMI_AMP;
	v->a[17238] = anon_sym_SEMI_SEMI_AMP;
	v->a[17239] = anon_sym_PIPE_AMP;
	small_parse_table_862(v);
}

void	small_parse_table_862(t_small_parse_table_array *v)
{
	v->a[17240] = anon_sym_AMP_AMP;
	v->a[17241] = anon_sym_PIPE_PIPE;
	v->a[17242] = anon_sym_LT;
	v->a[17243] = anon_sym_GT;
	v->a[17244] = anon_sym_GT_GT;
	v->a[17245] = anon_sym_AMP_GT;
	v->a[17246] = anon_sym_AMP_GT_GT;
	v->a[17247] = anon_sym_LT_AMP;
	v->a[17248] = anon_sym_GT_AMP;
	v->a[17249] = anon_sym_GT_PIPE;
	v->a[17250] = anon_sym_LT_AMP_DASH;
	v->a[17251] = anon_sym_GT_AMP_DASH;
	v->a[17252] = anon_sym_LT_LT;
	v->a[17253] = anon_sym_LT_LT_DASH;
	v->a[17254] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17255] = anon_sym_AMP;
	v->a[17256] = anon_sym_DOLLAR;
	v->a[17257] = sym__special_character;
	v->a[17258] = anon_sym_DQUOTE;
	v->a[17259] = sym_raw_string;
	small_parse_table_863(v);
}

void	small_parse_table_863(t_small_parse_table_array *v)
{
	v->a[17260] = aux_sym_number_token1;
	v->a[17261] = aux_sym_number_token2;
	v->a[17262] = anon_sym_DOLLAR_LBRACE;
	v->a[17263] = anon_sym_DOLLAR_LPAREN;
	v->a[17264] = anon_sym_BQUOTE;
	v->a[17265] = anon_sym_DOLLAR_BQUOTE;
	v->a[17266] = sym_word;
	v->a[17267] = anon_sym_SEMI;
	v->a[17268] = 6;
	v->a[17269] = actions(3);
	v->a[17270] = 1;
	v->a[17271] = sym_comment;
	v->a[17272] = actions(1855);
	v->a[17273] = 1;
	v->a[17274] = sym_variable_name;
	v->a[17275] = actions(1853);
	v->a[17276] = 2;
	v->a[17277] = aux_sym__simple_variable_name_token1;
	v->a[17278] = aux_sym__multiline_variable_name_token1;
	v->a[17279] = actions(816);
	small_parse_table_864(v);
}

void	small_parse_table_864(t_small_parse_table_array *v)
{
	v->a[17280] = 3;
	v->a[17281] = sym_file_descriptor;
	v->a[17282] = sym_test_operator;
	v->a[17283] = sym__brace_start;
	v->a[17284] = actions(1851);
	v->a[17285] = 9;
	v->a[17286] = anon_sym_BANG;
	v->a[17287] = anon_sym_DASH;
	v->a[17288] = anon_sym_STAR;
	v->a[17289] = anon_sym_QMARK;
	v->a[17290] = anon_sym_DOLLAR;
	v->a[17291] = anon_sym_POUND;
	v->a[17292] = anon_sym_AT;
	v->a[17293] = anon_sym_0;
	v->a[17294] = anon_sym__;
	v->a[17295] = actions(810);
	v->a[17296] = 28;
	v->a[17297] = anon_sym_PIPE;
	v->a[17298] = anon_sym_PIPE_AMP;
	v->a[17299] = anon_sym_AMP_AMP;
	small_parse_table_865(v);
}

/* EOF small_parse_table_172.c */
