/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2362.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11810(t_small_parse_table_array *v)
{
	v->a[236200] = 1;
	v->a[236201] = anon_sym_DOLLAR_LPAREN;
	v->a[236202] = actions(3809);
	v->a[236203] = 1;
	v->a[236204] = sym__brace_start;
	v->a[236205] = actions(9636);
	v->a[236206] = 1;
	v->a[236207] = anon_sym_DOLLAR_LBRACK;
	v->a[236208] = actions(9640);
	v->a[236209] = 1;
	v->a[236210] = anon_sym_DQUOTE;
	v->a[236211] = actions(9644);
	v->a[236212] = 1;
	v->a[236213] = anon_sym_DOLLAR_LBRACE;
	v->a[236214] = actions(9646);
	v->a[236215] = 1;
	v->a[236216] = anon_sym_BQUOTE;
	v->a[236217] = actions(9648);
	v->a[236218] = 1;
	v->a[236219] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11811(v);
}

void	small_parse_table_11811(t_small_parse_table_array *v)
{
	v->a[236220] = actions(9872);
	v->a[236221] = 1;
	v->a[236222] = sym_word;
	v->a[236223] = actions(9880);
	v->a[236224] = 1;
	v->a[236225] = sym__comment_word;
	v->a[236226] = actions(11128);
	v->a[236227] = 1;
	v->a[236228] = anon_sym_DOLLAR;
	v->a[236229] = actions(9634);
	v->a[236230] = 2;
	v->a[236231] = anon_sym_LPAREN_LPAREN;
	v->a[236232] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236233] = actions(9650);
	v->a[236234] = 2;
	v->a[236235] = anon_sym_LT_LPAREN;
	v->a[236236] = anon_sym_GT_LPAREN;
	v->a[236237] = actions(9876);
	v->a[236238] = 2;
	v->a[236239] = sym_test_operator;
	small_parse_table_11812(v);
}

void	small_parse_table_11812(t_small_parse_table_array *v)
{
	v->a[236240] = sym__special_character;
	v->a[236241] = actions(9878);
	v->a[236242] = 3;
	v->a[236243] = sym__bare_dollar;
	v->a[236244] = sym_raw_string;
	v->a[236245] = sym_ansi_c_string;
	v->a[236246] = state(4337);
	v->a[236247] = 9;
	v->a[236248] = sym_arithmetic_expansion;
	v->a[236249] = sym_brace_expression;
	v->a[236250] = sym_string;
	v->a[236251] = sym_translated_string;
	v->a[236252] = sym_number;
	v->a[236253] = sym_simple_expansion;
	v->a[236254] = sym_expansion;
	v->a[236255] = sym_command_substitution;
	v->a[236256] = sym_process_substitution;
	v->a[236257] = 18;
	v->a[236258] = actions(3);
	v->a[236259] = 1;
	small_parse_table_11813(v);
}

void	small_parse_table_11813(t_small_parse_table_array *v)
{
	v->a[236260] = sym_comment;
	v->a[236261] = actions(7958);
	v->a[236262] = 1;
	v->a[236263] = anon_sym_DOLLAR_LBRACK;
	v->a[236264] = actions(7964);
	v->a[236265] = 1;
	v->a[236266] = anon_sym_DQUOTE;
	v->a[236267] = actions(7968);
	v->a[236268] = 1;
	v->a[236269] = aux_sym_number_token1;
	v->a[236270] = actions(7970);
	v->a[236271] = 1;
	v->a[236272] = aux_sym_number_token2;
	v->a[236273] = actions(7972);
	v->a[236274] = 1;
	v->a[236275] = anon_sym_DOLLAR_LBRACE;
	v->a[236276] = actions(7974);
	v->a[236277] = 1;
	v->a[236278] = anon_sym_DOLLAR_LPAREN;
	v->a[236279] = actions(7976);
	small_parse_table_11814(v);
}

void	small_parse_table_11814(t_small_parse_table_array *v)
{
	v->a[236280] = 1;
	v->a[236281] = anon_sym_BQUOTE;
	v->a[236282] = actions(7978);
	v->a[236283] = 1;
	v->a[236284] = anon_sym_DOLLAR_BQUOTE;
	v->a[236285] = actions(7988);
	v->a[236286] = 1;
	v->a[236287] = sym__brace_start;
	v->a[236288] = actions(9860);
	v->a[236289] = 1;
	v->a[236290] = sym_word;
	v->a[236291] = actions(9868);
	v->a[236292] = 1;
	v->a[236293] = sym__comment_word;
	v->a[236294] = actions(11130);
	v->a[236295] = 1;
	v->a[236296] = anon_sym_DOLLAR;
	v->a[236297] = actions(7954);
	v->a[236298] = 2;
	v->a[236299] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11815(v);
}

/* EOF small_parse_table_2362.c */
