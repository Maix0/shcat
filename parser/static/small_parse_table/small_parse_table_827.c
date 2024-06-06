/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_827.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4135(t_small_parse_table_array *v)
{
	v->a[82700] = 21;
	v->a[82701] = actions(57);
	v->a[82702] = 1;
	v->a[82703] = sym_comment;
	v->a[82704] = actions(4614);
	v->a[82705] = 1;
	v->a[82706] = anon_sym_LPAREN;
	v->a[82707] = actions(4616);
	v->a[82708] = 1;
	v->a[82709] = anon_sym_BANG;
	v->a[82710] = actions(4622);
	v->a[82711] = 1;
	v->a[82712] = anon_sym_TILDE;
	v->a[82713] = actions(4624);
	v->a[82714] = 1;
	v->a[82715] = anon_sym_DOLLAR;
	v->a[82716] = actions(4626);
	v->a[82717] = 1;
	v->a[82718] = anon_sym_DQUOTE;
	v->a[82719] = actions(4628);
	small_parse_table_4136(v);
}

void	small_parse_table_4136(t_small_parse_table_array *v)
{
	v->a[82720] = 1;
	v->a[82721] = aux_sym_number_token1;
	v->a[82722] = actions(4630);
	v->a[82723] = 1;
	v->a[82724] = aux_sym_number_token2;
	v->a[82725] = actions(4632);
	v->a[82726] = 1;
	v->a[82727] = anon_sym_DOLLAR_LBRACE;
	v->a[82728] = actions(4634);
	v->a[82729] = 1;
	v->a[82730] = anon_sym_DOLLAR_LPAREN;
	v->a[82731] = actions(4636);
	v->a[82732] = 1;
	v->a[82733] = anon_sym_BQUOTE;
	v->a[82734] = actions(4638);
	v->a[82735] = 1;
	v->a[82736] = anon_sym_DOLLAR_BQUOTE;
	v->a[82737] = actions(4652);
	v->a[82738] = 1;
	v->a[82739] = aux_sym__simple_variable_name_token1;
	small_parse_table_4137(v);
}

void	small_parse_table_4137(t_small_parse_table_array *v)
{
	v->a[82740] = actions(4654);
	v->a[82741] = 1;
	v->a[82742] = sym_variable_name;
	v->a[82743] = state(1637);
	v->a[82744] = 1;
	v->a[82745] = sym__arithmetic_postfix_expression;
	v->a[82746] = state(1638);
	v->a[82747] = 1;
	v->a[82748] = sym__arithmetic_unary_expression;
	v->a[82749] = state(1640);
	v->a[82750] = 1;
	v->a[82751] = sym__arithmetic_ternary_expression;
	v->a[82752] = state(1642);
	v->a[82753] = 1;
	v->a[82754] = sym__arithmetic_binary_expression;
	v->a[82755] = actions(4618);
	v->a[82756] = 2;
	v->a[82757] = anon_sym_PLUS_PLUS;
	v->a[82758] = anon_sym_DASH_DASH;
	v->a[82759] = actions(4620);
	small_parse_table_4138(v);
}

void	small_parse_table_4138(t_small_parse_table_array *v)
{
	v->a[82760] = 2;
	v->a[82761] = anon_sym_DASH2;
	v->a[82762] = anon_sym_PLUS2;
	v->a[82763] = state(1618);
	v->a[82764] = 8;
	v->a[82765] = sym__arithmetic_expression;
	v->a[82766] = sym__arithmetic_literal;
	v->a[82767] = sym__arithmetic_parenthesized_expression;
	v->a[82768] = sym_string;
	v->a[82769] = sym_number;
	v->a[82770] = sym_simple_expansion;
	v->a[82771] = sym_expansion;
	v->a[82772] = sym_command_substitution;
	v->a[82773] = 21;
	v->a[82774] = actions(57);
	v->a[82775] = 1;
	v->a[82776] = sym_comment;
	v->a[82777] = actions(4614);
	v->a[82778] = 1;
	v->a[82779] = anon_sym_LPAREN;
	small_parse_table_4139(v);
}

void	small_parse_table_4139(t_small_parse_table_array *v)
{
	v->a[82780] = actions(4616);
	v->a[82781] = 1;
	v->a[82782] = anon_sym_BANG;
	v->a[82783] = actions(4622);
	v->a[82784] = 1;
	v->a[82785] = anon_sym_TILDE;
	v->a[82786] = actions(4624);
	v->a[82787] = 1;
	v->a[82788] = anon_sym_DOLLAR;
	v->a[82789] = actions(4626);
	v->a[82790] = 1;
	v->a[82791] = anon_sym_DQUOTE;
	v->a[82792] = actions(4628);
	v->a[82793] = 1;
	v->a[82794] = aux_sym_number_token1;
	v->a[82795] = actions(4630);
	v->a[82796] = 1;
	v->a[82797] = aux_sym_number_token2;
	v->a[82798] = actions(4632);
	v->a[82799] = 1;
	small_parse_table_4140(v);
}

/* EOF small_parse_table_827.c */
