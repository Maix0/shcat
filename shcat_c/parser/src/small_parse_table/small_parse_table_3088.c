/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3088.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15440(t_small_parse_table_array *v)
{
	v->a[308800] = sym_test_command;
	v->a[308801] = 8;
	v->a[308802] = actions(71);
	v->a[308803] = 1;
	v->a[308804] = sym_comment;
	v->a[308805] = actions(14280);
	v->a[308806] = 1;
	v->a[308807] = anon_sym_DQUOTE;
	v->a[308808] = actions(14282);
	v->a[308809] = 1;
	v->a[308810] = anon_sym_DOLLAR_LBRACE;
	v->a[308811] = actions(14284);
	v->a[308812] = 1;
	v->a[308813] = anon_sym_DOLLAR_LPAREN;
	v->a[308814] = actions(14286);
	v->a[308815] = 1;
	v->a[308816] = anon_sym_BQUOTE;
	v->a[308817] = actions(14288);
	v->a[308818] = 1;
	v->a[308819] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_15441(v);
}

void	small_parse_table_15441(t_small_parse_table_array *v)
{
	v->a[308820] = actions(5433);
	v->a[308821] = 2;
	v->a[308822] = anon_sym_PIPE;
	v->a[308823] = anon_sym_RPAREN;
	v->a[308824] = state(6677);
	v->a[308825] = 3;
	v->a[308826] = sym_string;
	v->a[308827] = sym_expansion;
	v->a[308828] = sym_command_substitution;
	v->a[308829] = 8;
	v->a[308830] = actions(71);
	v->a[308831] = 1;
	v->a[308832] = sym_comment;
	v->a[308833] = actions(14290);
	v->a[308834] = 1;
	v->a[308835] = anon_sym_LPAREN_LPAREN;
	v->a[308836] = actions(14292);
	v->a[308837] = 1;
	v->a[308838] = anon_sym_LPAREN;
	v->a[308839] = actions(14294);
	small_parse_table_15442(v);
}

void	small_parse_table_15442(t_small_parse_table_array *v)
{
	v->a[308840] = 1;
	v->a[308841] = anon_sym_if;
	v->a[308842] = actions(14296);
	v->a[308843] = 1;
	v->a[308844] = anon_sym_LBRACE;
	v->a[308845] = actions(14298);
	v->a[308846] = 1;
	v->a[308847] = anon_sym_LBRACK;
	v->a[308848] = actions(14300);
	v->a[308849] = 1;
	v->a[308850] = anon_sym_LBRACK_LBRACK;
	v->a[308851] = state(5405);
	v->a[308852] = 4;
	v->a[308853] = sym_if_statement;
	v->a[308854] = sym_compound_statement;
	v->a[308855] = sym_subshell;
	v->a[308856] = sym_test_command;
	v->a[308857] = 8;
	v->a[308858] = actions(71);
	v->a[308859] = 1;
	small_parse_table_15443(v);
}

void	small_parse_table_15443(t_small_parse_table_array *v)
{
	v->a[308860] = sym_comment;
	v->a[308861] = actions(14268);
	v->a[308862] = 1;
	v->a[308863] = anon_sym_LPAREN_LPAREN;
	v->a[308864] = actions(14270);
	v->a[308865] = 1;
	v->a[308866] = anon_sym_LPAREN;
	v->a[308867] = actions(14272);
	v->a[308868] = 1;
	v->a[308869] = anon_sym_if;
	v->a[308870] = actions(14274);
	v->a[308871] = 1;
	v->a[308872] = anon_sym_LBRACE;
	v->a[308873] = actions(14276);
	v->a[308874] = 1;
	v->a[308875] = anon_sym_LBRACK;
	v->a[308876] = actions(14278);
	v->a[308877] = 1;
	v->a[308878] = anon_sym_LBRACK_LBRACK;
	v->a[308879] = state(4829);
	small_parse_table_15444(v);
}

void	small_parse_table_15444(t_small_parse_table_array *v)
{
	v->a[308880] = 4;
	v->a[308881] = sym_if_statement;
	v->a[308882] = sym_compound_statement;
	v->a[308883] = sym_subshell;
	v->a[308884] = sym_test_command;
	v->a[308885] = 8;
	v->a[308886] = actions(71);
	v->a[308887] = 1;
	v->a[308888] = sym_comment;
	v->a[308889] = actions(14244);
	v->a[308890] = 1;
	v->a[308891] = anon_sym_LPAREN_LPAREN;
	v->a[308892] = actions(14248);
	v->a[308893] = 1;
	v->a[308894] = anon_sym_if;
	v->a[308895] = actions(14250);
	v->a[308896] = 1;
	v->a[308897] = anon_sym_LBRACE;
	v->a[308898] = actions(14252);
	v->a[308899] = 1;
	small_parse_table_15445(v);
}

/* EOF small_parse_table_3088.c */
