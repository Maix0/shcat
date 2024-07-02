/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_515.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2575(t_small_parse_table_array *v)
{
	v->a[51500] = anon_sym_DQUOTE;
	v->a[51501] = sym_raw_string;
	v->a[51502] = sym_number;
	v->a[51503] = anon_sym_DOLLAR_LBRACE;
	v->a[51504] = anon_sym_DOLLAR_LPAREN;
	v->a[51505] = anon_sym_BQUOTE;
	v->a[51506] = sym_word;
	v->a[51507] = 12;
	v->a[51508] = actions(3);
	v->a[51509] = 1;
	v->a[51510] = sym_comment;
	v->a[51511] = actions(1795);
	v->a[51512] = 1;
	v->a[51513] = anon_sym_RBRACE;
	v->a[51514] = actions(1801);
	v->a[51515] = 1;
	v->a[51516] = anon_sym_PERCENT;
	v->a[51517] = actions(1803);
	v->a[51518] = 1;
	v->a[51519] = anon_sym_POUND;
	small_parse_table_2576(v);
}

void	small_parse_table_2576(t_small_parse_table_array *v)
{
	v->a[51520] = actions(1809);
	v->a[51521] = 1;
	v->a[51522] = aux_sym__simple_variable_name_token1;
	v->a[51523] = actions(1811);
	v->a[51524] = 1;
	v->a[51525] = sym_variable_name;
	v->a[51526] = state(2006);
	v->a[51527] = 1;
	v->a[51528] = sym__expansion_regex;
	v->a[51529] = state(2007);
	v->a[51530] = 1;
	v->a[51531] = sym__expansion_expression;
	v->a[51532] = actions(1807);
	v->a[51533] = 2;
	v->a[51534] = sym__immediate_double_hash;
	v->a[51535] = anon_sym_PERCENT_PERCENT;
	v->a[51536] = actions(1797);
	v->a[51537] = 4;
	v->a[51538] = anon_sym_BANG;
	v->a[51539] = anon_sym_STAR;
	small_parse_table_2577(v);
}

void	small_parse_table_2577(t_small_parse_table_array *v)
{
	v->a[51540] = anon_sym_DOLLAR;
	v->a[51541] = anon_sym_AT;
	v->a[51542] = actions(1799);
	v->a[51543] = 4;
	v->a[51544] = anon_sym_DASH;
	v->a[51545] = anon_sym_QMARK;
	v->a[51546] = anon_sym_0;
	v->a[51547] = anon_sym__;
	v->a[51548] = actions(1805);
	v->a[51549] = 8;
	v->a[51550] = anon_sym_COLON_DASH;
	v->a[51551] = anon_sym_DASH3;
	v->a[51552] = anon_sym_COLON_EQ;
	v->a[51553] = anon_sym_EQ2;
	v->a[51554] = anon_sym_COLON_QMARK;
	v->a[51555] = anon_sym_QMARK2;
	v->a[51556] = anon_sym_COLON_PLUS;
	v->a[51557] = anon_sym_PLUS3;
	v->a[51558] = 3;
	v->a[51559] = actions(3);
	small_parse_table_2578(v);
}

void	small_parse_table_2578(t_small_parse_table_array *v)
{
	v->a[51560] = 1;
	v->a[51561] = sym_comment;
	v->a[51562] = actions(792);
	v->a[51563] = 3;
	v->a[51564] = sym_file_descriptor;
	v->a[51565] = sym__concat;
	v->a[51566] = sym__bare_dollar;
	v->a[51567] = actions(790);
	v->a[51568] = 22;
	v->a[51569] = anon_sym_PIPE;
	v->a[51570] = anon_sym_AMP_AMP;
	v->a[51571] = anon_sym_PIPE_PIPE;
	v->a[51572] = anon_sym_LT;
	v->a[51573] = anon_sym_GT;
	v->a[51574] = anon_sym_GT_GT;
	v->a[51575] = anon_sym_LT_AMP;
	v->a[51576] = anon_sym_GT_AMP;
	v->a[51577] = anon_sym_GT_PIPE;
	v->a[51578] = anon_sym_LT_GT;
	v->a[51579] = anon_sym_LT_LT;
	small_parse_table_2579(v);
}

void	small_parse_table_2579(t_small_parse_table_array *v)
{
	v->a[51580] = anon_sym_LT_LT_DASH;
	v->a[51581] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51582] = aux_sym_concatenation_token1;
	v->a[51583] = anon_sym_DOLLAR;
	v->a[51584] = anon_sym_DQUOTE;
	v->a[51585] = sym_raw_string;
	v->a[51586] = sym_number;
	v->a[51587] = anon_sym_DOLLAR_LBRACE;
	v->a[51588] = anon_sym_DOLLAR_LPAREN;
	v->a[51589] = anon_sym_BQUOTE;
	v->a[51590] = sym_word;
	v->a[51591] = 3;
	v->a[51592] = actions(3);
	v->a[51593] = 1;
	v->a[51594] = sym_comment;
	v->a[51595] = actions(796);
	v->a[51596] = 3;
	v->a[51597] = sym_file_descriptor;
	v->a[51598] = sym__concat;
	v->a[51599] = sym__bare_dollar;
	small_parse_table_2580(v);
}

/* EOF small_parse_table_515.c */
