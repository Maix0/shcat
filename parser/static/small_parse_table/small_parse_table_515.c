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
	v->a[51500] = actions(2614);
	v->a[51501] = 1;
	v->a[51502] = anon_sym_RBRACE;
	v->a[51503] = state(1595);
	v->a[51504] = 1;
	v->a[51505] = sym__expansion_body;
	v->a[51506] = actions(2275);
	v->a[51507] = 6;
	v->a[51508] = anon_sym_BANG;
	v->a[51509] = anon_sym_DASH;
	v->a[51510] = anon_sym_STAR;
	v->a[51511] = anon_sym_QMARK;
	v->a[51512] = anon_sym_DOLLAR;
	v->a[51513] = anon_sym_AT;
	v->a[51514] = 8;
	v->a[51515] = actions(3);
	v->a[51516] = 1;
	v->a[51517] = sym_comment;
	v->a[51518] = actions(2277);
	v->a[51519] = 1;
	small_parse_table_2576(v);
}

void	small_parse_table_2576(t_small_parse_table_array *v)
{
	v->a[51520] = anon_sym_POUND;
	v->a[51521] = actions(2279);
	v->a[51522] = 1;
	v->a[51523] = aux_sym__simple_variable_name_token1;
	v->a[51524] = actions(2281);
	v->a[51525] = 1;
	v->a[51526] = anon_sym_0;
	v->a[51527] = actions(2283);
	v->a[51528] = 1;
	v->a[51529] = sym_variable_name;
	v->a[51530] = actions(2616);
	v->a[51531] = 1;
	v->a[51532] = anon_sym_RBRACE;
	v->a[51533] = state(1642);
	v->a[51534] = 1;
	v->a[51535] = sym__expansion_body;
	v->a[51536] = actions(2275);
	v->a[51537] = 6;
	v->a[51538] = anon_sym_BANG;
	v->a[51539] = anon_sym_DASH;
	small_parse_table_2577(v);
}

void	small_parse_table_2577(t_small_parse_table_array *v)
{
	v->a[51540] = anon_sym_STAR;
	v->a[51541] = anon_sym_QMARK;
	v->a[51542] = anon_sym_DOLLAR;
	v->a[51543] = anon_sym_AT;
	v->a[51544] = 3;
	v->a[51545] = actions(3);
	v->a[51546] = 1;
	v->a[51547] = sym_comment;
	v->a[51548] = actions(917);
	v->a[51549] = 2;
	v->a[51550] = sym_variable_name;
	v->a[51551] = aux_sym_heredoc_redirect_token1;
	v->a[51552] = actions(919);
	v->a[51553] = 10;
	v->a[51554] = anon_sym_esac;
	v->a[51555] = anon_sym_PIPE;
	v->a[51556] = anon_sym_SEMI_SEMI;
	v->a[51557] = anon_sym_AMP_AMP;
	v->a[51558] = anon_sym_PIPE_PIPE;
	v->a[51559] = anon_sym_LT;
	small_parse_table_2578(v);
}

void	small_parse_table_2578(t_small_parse_table_array *v)
{
	v->a[51560] = anon_sym_GT;
	v->a[51561] = anon_sym_GT_GT;
	v->a[51562] = anon_sym_LT_LT;
	v->a[51563] = anon_sym_SEMI;
	v->a[51564] = 10;
	v->a[51565] = actions(3);
	v->a[51566] = 1;
	v->a[51567] = sym_comment;
	v->a[51568] = actions(2293);
	v->a[51569] = 1;
	v->a[51570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51571] = actions(2299);
	v->a[51572] = 1;
	v->a[51573] = sym_string_content;
	v->a[51574] = actions(2301);
	v->a[51575] = 1;
	v->a[51576] = anon_sym_DOLLAR_LBRACE;
	v->a[51577] = actions(2303);
	v->a[51578] = 1;
	v->a[51579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2579(v);
}

void	small_parse_table_2579(t_small_parse_table_array *v)
{
	v->a[51580] = actions(2305);
	v->a[51581] = 1;
	v->a[51582] = anon_sym_BQUOTE;
	v->a[51583] = actions(2618);
	v->a[51584] = 1;
	v->a[51585] = anon_sym_DOLLAR;
	v->a[51586] = actions(2620);
	v->a[51587] = 1;
	v->a[51588] = anon_sym_DQUOTE;
	v->a[51589] = state(1181);
	v->a[51590] = 1;
	v->a[51591] = aux_sym_string_repeat1;
	v->a[51592] = state(1394);
	v->a[51593] = 4;
	v->a[51594] = sym_arithmetic_expansion;
	v->a[51595] = sym_simple_expansion;
	v->a[51596] = sym_expansion;
	v->a[51597] = sym_command_substitution;
	v->a[51598] = 3;
	v->a[51599] = actions(3);
	small_parse_table_2580(v);
}

/* EOF small_parse_table_515.c */
