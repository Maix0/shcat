/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_338.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1690(t_small_parse_table_array *v)
{
	v->a[33800] = sym_number;
	v->a[33801] = sym_word;
	v->a[33802] = state(782);
	v->a[33803] = 5;
	v->a[33804] = sym_arithmetic_expansion;
	v->a[33805] = sym_string;
	v->a[33806] = sym_simple_expansion;
	v->a[33807] = sym_expansion;
	v->a[33808] = sym_command_substitution;
	v->a[33809] = actions(504);
	v->a[33810] = 12;
	v->a[33811] = anon_sym_PIPE;
	v->a[33812] = anon_sym_AMP_AMP;
	v->a[33813] = anon_sym_PIPE_PIPE;
	v->a[33814] = anon_sym_LT;
	v->a[33815] = anon_sym_GT;
	v->a[33816] = anon_sym_GT_GT;
	v->a[33817] = anon_sym_LT_AMP;
	v->a[33818] = anon_sym_GT_AMP;
	v->a[33819] = anon_sym_GT_PIPE;
	small_parse_table_1691(v);
}

void	small_parse_table_1691(t_small_parse_table_array *v)
{
	v->a[33820] = anon_sym_LT_GT;
	v->a[33821] = anon_sym_LT_LT;
	v->a[33822] = anon_sym_LT_LT_DASH;
	v->a[33823] = 3;
	v->a[33824] = actions(3);
	v->a[33825] = 1;
	v->a[33826] = sym_comment;
	v->a[33827] = actions(1289);
	v->a[33828] = 2;
	v->a[33829] = sym_file_descriptor;
	v->a[33830] = sym_variable_name;
	v->a[33831] = actions(1287);
	v->a[33832] = 28;
	v->a[33833] = anon_sym_for;
	v->a[33834] = anon_sym_while;
	v->a[33835] = anon_sym_until;
	v->a[33836] = anon_sym_done;
	v->a[33837] = anon_sym_if;
	v->a[33838] = anon_sym_then;
	v->a[33839] = anon_sym_case;
	small_parse_table_1692(v);
}

void	small_parse_table_1692(t_small_parse_table_array *v)
{
	v->a[33840] = anon_sym_LPAREN;
	v->a[33841] = anon_sym_RPAREN;
	v->a[33842] = anon_sym_SEMI_SEMI;
	v->a[33843] = anon_sym_LBRACE;
	v->a[33844] = anon_sym_BANG;
	v->a[33845] = anon_sym_LT;
	v->a[33846] = anon_sym_GT;
	v->a[33847] = anon_sym_GT_GT;
	v->a[33848] = anon_sym_LT_AMP;
	v->a[33849] = anon_sym_GT_AMP;
	v->a[33850] = anon_sym_GT_PIPE;
	v->a[33851] = anon_sym_LT_GT;
	v->a[33852] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33853] = anon_sym_DOLLAR;
	v->a[33854] = anon_sym_DQUOTE;
	v->a[33855] = sym_raw_string;
	v->a[33856] = sym_number;
	v->a[33857] = anon_sym_DOLLAR_LBRACE;
	v->a[33858] = anon_sym_DOLLAR_LPAREN;
	v->a[33859] = anon_sym_BQUOTE;
	small_parse_table_1693(v);
}

void	small_parse_table_1693(t_small_parse_table_array *v)
{
	v->a[33860] = sym_word;
	v->a[33861] = 3;
	v->a[33862] = actions(3);
	v->a[33863] = 1;
	v->a[33864] = sym_comment;
	v->a[33865] = actions(1201);
	v->a[33866] = 3;
	v->a[33867] = sym_file_descriptor;
	v->a[33868] = sym__concat;
	v->a[33869] = sym__bare_dollar;
	v->a[33870] = actions(1199);
	v->a[33871] = 27;
	v->a[33872] = anon_sym_PIPE;
	v->a[33873] = anon_sym_RPAREN;
	v->a[33874] = anon_sym_SEMI_SEMI;
	v->a[33875] = anon_sym_AMP_AMP;
	v->a[33876] = anon_sym_PIPE_PIPE;
	v->a[33877] = anon_sym_LT;
	v->a[33878] = anon_sym_GT;
	v->a[33879] = anon_sym_GT_GT;
	small_parse_table_1694(v);
}

void	small_parse_table_1694(t_small_parse_table_array *v)
{
	v->a[33880] = anon_sym_LT_AMP;
	v->a[33881] = anon_sym_GT_AMP;
	v->a[33882] = anon_sym_GT_PIPE;
	v->a[33883] = anon_sym_LT_GT;
	v->a[33884] = anon_sym_LT_LT;
	v->a[33885] = anon_sym_LT_LT_DASH;
	v->a[33886] = aux_sym_heredoc_redirect_token1;
	v->a[33887] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33888] = anon_sym_AMP;
	v->a[33889] = aux_sym_concatenation_token1;
	v->a[33890] = anon_sym_DOLLAR;
	v->a[33891] = anon_sym_DQUOTE;
	v->a[33892] = sym_raw_string;
	v->a[33893] = sym_number;
	v->a[33894] = anon_sym_DOLLAR_LBRACE;
	v->a[33895] = anon_sym_DOLLAR_LPAREN;
	v->a[33896] = anon_sym_BQUOTE;
	v->a[33897] = sym_word;
	v->a[33898] = anon_sym_SEMI;
	v->a[33899] = 3;
	small_parse_table_1695(v);
}

/* EOF small_parse_table_338.c */
