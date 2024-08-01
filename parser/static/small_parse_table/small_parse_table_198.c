/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_198.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_990(t_small_parse_table_array *v)
{
	v->a[19800] = 3;
	v->a[19801] = sym_raw_string;
	v->a[19802] = sym_number;
	v->a[19803] = sym_word;
	v->a[19804] = state(493);
	v->a[19805] = 5;
	v->a[19806] = sym_arithmetic_expansion;
	v->a[19807] = sym_string;
	v->a[19808] = sym_simple_expansion;
	v->a[19809] = sym_expansion;
	v->a[19810] = sym_command_substitution;
	v->a[19811] = actions(428);
	v->a[19812] = 10;
	v->a[19813] = anon_sym_PIPE;
	v->a[19814] = anon_sym_SEMI_SEMI;
	v->a[19815] = anon_sym_AMP_AMP;
	v->a[19816] = anon_sym_PIPE_PIPE;
	v->a[19817] = anon_sym_LT;
	v->a[19818] = anon_sym_GT;
	v->a[19819] = anon_sym_GT_GT;
	small_parse_table_991(v);
}

void	small_parse_table_991(t_small_parse_table_array *v)
{
	v->a[19820] = anon_sym_LT_LT;
	v->a[19821] = aux_sym_heredoc_redirect_token1;
	v->a[19822] = anon_sym_SEMI;
	v->a[19823] = 18;
	v->a[19824] = actions(3);
	v->a[19825] = 1;
	v->a[19826] = sym_comment;
	v->a[19827] = actions(778);
	v->a[19828] = 1;
	v->a[19829] = anon_sym_LPAREN;
	v->a[19830] = actions(782);
	v->a[19831] = 1;
	v->a[19832] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19833] = actions(784);
	v->a[19834] = 1;
	v->a[19835] = anon_sym_DOLLAR;
	v->a[19836] = actions(786);
	v->a[19837] = 1;
	v->a[19838] = anon_sym_DQUOTE;
	v->a[19839] = actions(788);
	small_parse_table_992(v);
}

void	small_parse_table_992(t_small_parse_table_array *v)
{
	v->a[19840] = 1;
	v->a[19841] = anon_sym_DOLLAR_LBRACE;
	v->a[19842] = actions(790);
	v->a[19843] = 1;
	v->a[19844] = anon_sym_DOLLAR_LPAREN;
	v->a[19845] = actions(792);
	v->a[19846] = 1;
	v->a[19847] = anon_sym_BQUOTE;
	v->a[19848] = actions(794);
	v->a[19849] = 1;
	v->a[19850] = sym_extglob_pattern;
	v->a[19851] = actions(821);
	v->a[19852] = 1;
	v->a[19853] = anon_sym_esac;
	v->a[19854] = state(485);
	v->a[19855] = 1;
	v->a[19856] = sym_terminator;
	v->a[19857] = state(524);
	v->a[19858] = 1;
	v->a[19859] = aux_sym_case_statement_repeat1;
	small_parse_table_993(v);
}

void	small_parse_table_993(t_small_parse_table_array *v)
{
	v->a[19860] = state(1232);
	v->a[19861] = 1;
	v->a[19862] = sym_case_item;
	v->a[19863] = state(1627);
	v->a[19864] = 1;
	v->a[19865] = sym__case_item_last;
	v->a[19866] = state(1538);
	v->a[19867] = 2;
	v->a[19868] = sym_concatenation;
	v->a[19869] = sym__extglob_blob;
	v->a[19870] = actions(774);
	v->a[19871] = 3;
	v->a[19872] = sym_raw_string;
	v->a[19873] = sym_number;
	v->a[19874] = sym_word;
	v->a[19875] = actions(780);
	v->a[19876] = 3;
	v->a[19877] = anon_sym_SEMI_SEMI;
	v->a[19878] = aux_sym_heredoc_redirect_token1;
	v->a[19879] = anon_sym_SEMI;
	small_parse_table_994(v);
}

void	small_parse_table_994(t_small_parse_table_array *v)
{
	v->a[19880] = state(1468);
	v->a[19881] = 5;
	v->a[19882] = sym_arithmetic_expansion;
	v->a[19883] = sym_string;
	v->a[19884] = sym_simple_expansion;
	v->a[19885] = sym_expansion;
	v->a[19886] = sym_command_substitution;
	v->a[19887] = 7;
	v->a[19888] = actions(3);
	v->a[19889] = 1;
	v->a[19890] = sym_comment;
	v->a[19891] = actions(580);
	v->a[19892] = 1;
	v->a[19893] = anon_sym_PIPE;
	v->a[19894] = actions(599);
	v->a[19895] = 1;
	v->a[19896] = sym_variable_name;
	v->a[19897] = state(963);
	v->a[19898] = 2;
	v->a[19899] = sym_variable_assignment;
	small_parse_table_995(v);
}

/* EOF small_parse_table_198.c */
