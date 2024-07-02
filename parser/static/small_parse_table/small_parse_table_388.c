/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_388.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1940(t_small_parse_table_array *v)
{
	v->a[38800] = anon_sym_DOLLAR_LPAREN;
	v->a[38801] = anon_sym_BQUOTE;
	v->a[38802] = sym_word;
	v->a[38803] = 3;
	v->a[38804] = actions(3);
	v->a[38805] = 1;
	v->a[38806] = sym_comment;
	v->a[38807] = actions(1092);
	v->a[38808] = 2;
	v->a[38809] = sym_file_descriptor;
	v->a[38810] = sym__concat;
	v->a[38811] = actions(1094);
	v->a[38812] = 27;
	v->a[38813] = anon_sym_esac;
	v->a[38814] = anon_sym_PIPE;
	v->a[38815] = anon_sym_SEMI_SEMI;
	v->a[38816] = anon_sym_AMP_AMP;
	v->a[38817] = anon_sym_PIPE_PIPE;
	v->a[38818] = anon_sym_LT;
	v->a[38819] = anon_sym_GT;
	small_parse_table_1941(v);
}

void	small_parse_table_1941(t_small_parse_table_array *v)
{
	v->a[38820] = anon_sym_GT_GT;
	v->a[38821] = anon_sym_LT_AMP;
	v->a[38822] = anon_sym_GT_AMP;
	v->a[38823] = anon_sym_GT_PIPE;
	v->a[38824] = anon_sym_LT_GT;
	v->a[38825] = anon_sym_LT_LT;
	v->a[38826] = anon_sym_LT_LT_DASH;
	v->a[38827] = aux_sym_heredoc_redirect_token1;
	v->a[38828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38829] = anon_sym_AMP;
	v->a[38830] = aux_sym_concatenation_token1;
	v->a[38831] = anon_sym_DOLLAR;
	v->a[38832] = anon_sym_DQUOTE;
	v->a[38833] = sym_raw_string;
	v->a[38834] = sym_number;
	v->a[38835] = anon_sym_DOLLAR_LBRACE;
	v->a[38836] = anon_sym_DOLLAR_LPAREN;
	v->a[38837] = anon_sym_BQUOTE;
	v->a[38838] = sym_word;
	v->a[38839] = anon_sym_SEMI;
	small_parse_table_1942(v);
}

void	small_parse_table_1942(t_small_parse_table_array *v)
{
	v->a[38840] = 12;
	v->a[38841] = actions(3);
	v->a[38842] = 1;
	v->a[38843] = sym_comment;
	v->a[38844] = actions(511);
	v->a[38845] = 1;
	v->a[38846] = sym_file_descriptor;
	v->a[38847] = actions(1381);
	v->a[38848] = 1;
	v->a[38849] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38850] = actions(1383);
	v->a[38851] = 1;
	v->a[38852] = anon_sym_DOLLAR;
	v->a[38853] = actions(1385);
	v->a[38854] = 1;
	v->a[38855] = anon_sym_DQUOTE;
	v->a[38856] = actions(1387);
	v->a[38857] = 1;
	v->a[38858] = anon_sym_DOLLAR_LBRACE;
	v->a[38859] = actions(1389);
	small_parse_table_1943(v);
}

void	small_parse_table_1943(t_small_parse_table_array *v)
{
	v->a[38860] = 1;
	v->a[38861] = anon_sym_DOLLAR_LPAREN;
	v->a[38862] = actions(1391);
	v->a[38863] = 1;
	v->a[38864] = anon_sym_BQUOTE;
	v->a[38865] = state(581);
	v->a[38866] = 2;
	v->a[38867] = sym_concatenation;
	v->a[38868] = aux_sym_for_statement_repeat1;
	v->a[38869] = actions(1379);
	v->a[38870] = 3;
	v->a[38871] = sym_raw_string;
	v->a[38872] = sym_number;
	v->a[38873] = sym_word;
	v->a[38874] = state(884);
	v->a[38875] = 5;
	v->a[38876] = sym_arithmetic_expansion;
	v->a[38877] = sym_string;
	v->a[38878] = sym_simple_expansion;
	v->a[38879] = sym_expansion;
	small_parse_table_1944(v);
}

void	small_parse_table_1944(t_small_parse_table_array *v)
{
	v->a[38880] = sym_command_substitution;
	v->a[38881] = actions(509);
	v->a[38882] = 12;
	v->a[38883] = anon_sym_PIPE;
	v->a[38884] = anon_sym_AMP_AMP;
	v->a[38885] = anon_sym_PIPE_PIPE;
	v->a[38886] = anon_sym_LT;
	v->a[38887] = anon_sym_GT;
	v->a[38888] = anon_sym_GT_GT;
	v->a[38889] = anon_sym_LT_AMP;
	v->a[38890] = anon_sym_GT_AMP;
	v->a[38891] = anon_sym_GT_PIPE;
	v->a[38892] = anon_sym_LT_GT;
	v->a[38893] = anon_sym_LT_LT;
	v->a[38894] = anon_sym_LT_LT_DASH;
	v->a[38895] = 3;
	v->a[38896] = actions(3);
	v->a[38897] = 1;
	v->a[38898] = sym_comment;
	v->a[38899] = actions(1178);
	small_parse_table_1945(v);
}

/* EOF small_parse_table_388.c */
