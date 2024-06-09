/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_428.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2140(t_small_parse_table_array *v)
{
	v->a[42800] = anon_sym_DOLLAR;
	v->a[42801] = actions(387);
	v->a[42802] = 1;
	v->a[42803] = anon_sym_DQUOTE;
	v->a[42804] = actions(391);
	v->a[42805] = 1;
	v->a[42806] = aux_sym_number_token1;
	v->a[42807] = actions(393);
	v->a[42808] = 1;
	v->a[42809] = aux_sym_number_token2;
	v->a[42810] = actions(395);
	v->a[42811] = 1;
	v->a[42812] = anon_sym_DOLLAR_LBRACE;
	v->a[42813] = actions(397);
	v->a[42814] = 1;
	v->a[42815] = anon_sym_DOLLAR_LPAREN;
	v->a[42816] = actions(399);
	v->a[42817] = 1;
	v->a[42818] = anon_sym_BQUOTE;
	v->a[42819] = actions(405);
	small_parse_table_2141(v);
}

void	small_parse_table_2141(t_small_parse_table_array *v)
{
	v->a[42820] = 1;
	v->a[42821] = sym_variable_name;
	v->a[42822] = actions(1102);
	v->a[42823] = 1;
	v->a[42824] = sym_file_descriptor;
	v->a[42825] = state(261);
	v->a[42826] = 1;
	v->a[42827] = sym_command_name;
	v->a[42828] = state(889);
	v->a[42829] = 1;
	v->a[42830] = sym_concatenation;
	v->a[42831] = state(1237);
	v->a[42832] = 1;
	v->a[42833] = sym_file_redirect;
	v->a[42834] = actions(389);
	v->a[42835] = 2;
	v->a[42836] = sym_raw_string;
	v->a[42837] = sym_word;
	v->a[42838] = actions(1100);
	v->a[42839] = 2;
	small_parse_table_2142(v);
}

void	small_parse_table_2142(t_small_parse_table_array *v)
{
	v->a[42840] = anon_sym_LT_AMP_DASH;
	v->a[42841] = anon_sym_GT_AMP_DASH;
	v->a[42842] = state(996);
	v->a[42843] = 2;
	v->a[42844] = sym_variable_assignment;
	v->a[42845] = aux_sym_command_repeat1;
	v->a[42846] = state(768);
	v->a[42847] = 6;
	v->a[42848] = sym_arithmetic_expansion;
	v->a[42849] = sym_string;
	v->a[42850] = sym_number;
	v->a[42851] = sym_simple_expansion;
	v->a[42852] = sym_expansion;
	v->a[42853] = sym_command_substitution;
	v->a[42854] = actions(1098);
	v->a[42855] = 8;
	v->a[42856] = anon_sym_LT;
	v->a[42857] = anon_sym_GT;
	v->a[42858] = anon_sym_GT_GT;
	v->a[42859] = anon_sym_AMP_GT;
	small_parse_table_2143(v);
}

void	small_parse_table_2143(t_small_parse_table_array *v)
{
	v->a[42860] = anon_sym_AMP_GT_GT;
	v->a[42861] = anon_sym_LT_AMP;
	v->a[42862] = anon_sym_GT_AMP;
	v->a[42863] = anon_sym_GT_PIPE;
	v->a[42864] = 3;
	v->a[42865] = actions(3);
	v->a[42866] = 1;
	v->a[42867] = sym_comment;
	v->a[42868] = actions(1108);
	v->a[42869] = 2;
	v->a[42870] = sym_file_descriptor;
	v->a[42871] = sym__bare_dollar;
	v->a[42872] = actions(1104);
	v->a[42873] = 31;
	v->a[42874] = anon_sym_LPAREN;
	v->a[42875] = anon_sym_PIPE;
	v->a[42876] = anon_sym_RPAREN;
	v->a[42877] = anon_sym_SEMI_SEMI;
	v->a[42878] = anon_sym_AMP_AMP;
	v->a[42879] = anon_sym_PIPE_PIPE;
	small_parse_table_2144(v);
}

void	small_parse_table_2144(t_small_parse_table_array *v)
{
	v->a[42880] = anon_sym_LT;
	v->a[42881] = anon_sym_GT;
	v->a[42882] = anon_sym_GT_GT;
	v->a[42883] = anon_sym_AMP_GT;
	v->a[42884] = anon_sym_AMP_GT_GT;
	v->a[42885] = anon_sym_LT_AMP;
	v->a[42886] = anon_sym_GT_AMP;
	v->a[42887] = anon_sym_GT_PIPE;
	v->a[42888] = anon_sym_LT_AMP_DASH;
	v->a[42889] = anon_sym_GT_AMP_DASH;
	v->a[42890] = anon_sym_LT_LT;
	v->a[42891] = anon_sym_LT_LT_DASH;
	v->a[42892] = aux_sym_heredoc_redirect_token1;
	v->a[42893] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42894] = anon_sym_AMP;
	v->a[42895] = anon_sym_DOLLAR;
	v->a[42896] = anon_sym_DQUOTE;
	v->a[42897] = sym_raw_string;
	v->a[42898] = aux_sym_number_token1;
	v->a[42899] = aux_sym_number_token2;
	small_parse_table_2145(v);
}

/* EOF small_parse_table_428.c */
