/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_442.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2210(t_small_parse_table_array *v)
{
	v->a[44200] = sym_arithmetic_postfix_expression;
	v->a[44201] = sym_arithmetic_parenthesized_expression;
	v->a[44202] = sym_command_substitution;
	v->a[44203] = 5;
	v->a[44204] = actions(3);
	v->a[44205] = 1;
	v->a[44206] = sym_comment;
	v->a[44207] = actions(792);
	v->a[44208] = 1;
	v->a[44209] = sym_variable_name;
	v->a[44210] = actions(1500);
	v->a[44211] = 1;
	v->a[44212] = sym_file_descriptor;
	v->a[44213] = actions(780);
	v->a[44214] = 9;
	v->a[44215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44216] = anon_sym_DOLLAR;
	v->a[44217] = anon_sym_DQUOTE;
	v->a[44218] = sym_raw_string;
	v->a[44219] = sym_number;
	small_parse_table_2211(v);
}

void	small_parse_table_2211(t_small_parse_table_array *v)
{
	v->a[44220] = anon_sym_DOLLAR_LBRACE;
	v->a[44221] = anon_sym_DOLLAR_LPAREN;
	v->a[44222] = anon_sym_BQUOTE;
	v->a[44223] = sym_word;
	v->a[44224] = actions(1498);
	v->a[44225] = 16;
	v->a[44226] = anon_sym_esac;
	v->a[44227] = anon_sym_PIPE;
	v->a[44228] = anon_sym_SEMI_SEMI;
	v->a[44229] = anon_sym_AMP_AMP;
	v->a[44230] = anon_sym_PIPE_PIPE;
	v->a[44231] = anon_sym_LT;
	v->a[44232] = anon_sym_GT;
	v->a[44233] = anon_sym_GT_GT;
	v->a[44234] = anon_sym_LT_AMP;
	v->a[44235] = anon_sym_GT_AMP;
	v->a[44236] = anon_sym_GT_PIPE;
	v->a[44237] = anon_sym_LT_GT;
	v->a[44238] = anon_sym_LT_LT;
	v->a[44239] = anon_sym_LT_LT_DASH;
	small_parse_table_2212(v);
}

void	small_parse_table_2212(t_small_parse_table_array *v)
{
	v->a[44240] = aux_sym_heredoc_redirect_token1;
	v->a[44241] = anon_sym_SEMI;
	v->a[44242] = 6;
	v->a[44243] = actions(3);
	v->a[44244] = 1;
	v->a[44245] = sym_comment;
	v->a[44246] = actions(1457);
	v->a[44247] = 1;
	v->a[44248] = sym_file_descriptor;
	v->a[44249] = actions(1460);
	v->a[44250] = 1;
	v->a[44251] = sym_variable_name;
	v->a[44252] = actions(1454);
	v->a[44253] = 7;
	v->a[44254] = anon_sym_LT;
	v->a[44255] = anon_sym_GT;
	v->a[44256] = anon_sym_GT_GT;
	v->a[44257] = anon_sym_LT_AMP;
	v->a[44258] = anon_sym_GT_AMP;
	v->a[44259] = anon_sym_GT_PIPE;
	small_parse_table_2213(v);
}

void	small_parse_table_2213(t_small_parse_table_array *v)
{
	v->a[44260] = anon_sym_LT_GT;
	v->a[44261] = actions(1447);
	v->a[44262] = 9;
	v->a[44263] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44264] = anon_sym_DOLLAR;
	v->a[44265] = anon_sym_DQUOTE;
	v->a[44266] = sym_raw_string;
	v->a[44267] = sym_number;
	v->a[44268] = anon_sym_DOLLAR_LBRACE;
	v->a[44269] = anon_sym_DOLLAR_LPAREN;
	v->a[44270] = anon_sym_BQUOTE;
	v->a[44271] = sym_word;
	v->a[44272] = actions(1449);
	v->a[44273] = 9;
	v->a[44274] = anon_sym_esac;
	v->a[44275] = anon_sym_PIPE;
	v->a[44276] = anon_sym_SEMI_SEMI;
	v->a[44277] = anon_sym_AMP_AMP;
	v->a[44278] = anon_sym_PIPE_PIPE;
	v->a[44279] = anon_sym_LT_LT;
	small_parse_table_2214(v);
}

void	small_parse_table_2214(t_small_parse_table_array *v)
{
	v->a[44280] = anon_sym_LT_LT_DASH;
	v->a[44281] = aux_sym_heredoc_redirect_token1;
	v->a[44282] = anon_sym_SEMI;
	v->a[44283] = 16;
	v->a[44284] = actions(501);
	v->a[44285] = 1;
	v->a[44286] = sym_comment;
	v->a[44287] = actions(1469);
	v->a[44288] = 1;
	v->a[44289] = anon_sym_LPAREN;
	v->a[44290] = actions(1471);
	v->a[44291] = 1;
	v->a[44292] = anon_sym_BANG;
	v->a[44293] = actions(1479);
	v->a[44294] = 1;
	v->a[44295] = anon_sym_TILDE;
	v->a[44296] = actions(1481);
	v->a[44297] = 1;
	v->a[44298] = anon_sym_DOLLAR;
	v->a[44299] = actions(1483);
	small_parse_table_2215(v);
}

/* EOF small_parse_table_442.c */
