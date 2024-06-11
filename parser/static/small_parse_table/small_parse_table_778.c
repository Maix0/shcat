/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_778.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3890(t_small_parse_table_array *v)
{
	v->a[77800] = state(2080);
	v->a[77801] = 1;
	v->a[77802] = sym_case_item;
	v->a[77803] = state(2429);
	v->a[77804] = 1;
	v->a[77805] = sym__case_item_last;
	v->a[77806] = state(2224);
	v->a[77807] = 2;
	v->a[77808] = sym_concatenation;
	v->a[77809] = sym__extglob_blob;
	v->a[77810] = actions(1955);
	v->a[77811] = 3;
	v->a[77812] = sym_raw_string;
	v->a[77813] = sym_number;
	v->a[77814] = sym_word;
	v->a[77815] = state(2157);
	v->a[77816] = 5;
	v->a[77817] = sym_arithmetic_expansion;
	v->a[77818] = sym_string;
	v->a[77819] = sym_simple_expansion;
	small_parse_table_3891(v);
}

void	small_parse_table_3891(t_small_parse_table_array *v)
{
	v->a[77820] = sym_expansion;
	v->a[77821] = sym_command_substitution;
	v->a[77822] = 5;
	v->a[77823] = actions(3);
	v->a[77824] = 1;
	v->a[77825] = sym_comment;
	v->a[77826] = actions(2887);
	v->a[77827] = 1;
	v->a[77828] = anon_sym_PIPE;
	v->a[77829] = state(1442);
	v->a[77830] = 1;
	v->a[77831] = aux_sym_pipeline_repeat1;
	v->a[77832] = actions(2316);
	v->a[77833] = 2;
	v->a[77834] = sym_file_descriptor;
	v->a[77835] = aux_sym_heredoc_redirect_token1;
	v->a[77836] = actions(2321);
	v->a[77837] = 18;
	v->a[77838] = anon_sym_esac;
	v->a[77839] = anon_sym_SEMI_SEMI;
	small_parse_table_3892(v);
}

void	small_parse_table_3892(t_small_parse_table_array *v)
{
	v->a[77840] = anon_sym_AMP_AMP;
	v->a[77841] = anon_sym_PIPE_PIPE;
	v->a[77842] = anon_sym_LT;
	v->a[77843] = anon_sym_GT;
	v->a[77844] = anon_sym_GT_GT;
	v->a[77845] = anon_sym_AMP_GT;
	v->a[77846] = anon_sym_AMP_GT_GT;
	v->a[77847] = anon_sym_LT_AMP;
	v->a[77848] = anon_sym_GT_AMP;
	v->a[77849] = anon_sym_GT_PIPE;
	v->a[77850] = anon_sym_LT_AMP_DASH;
	v->a[77851] = anon_sym_GT_AMP_DASH;
	v->a[77852] = anon_sym_LT_LT;
	v->a[77853] = anon_sym_LT_LT_DASH;
	v->a[77854] = anon_sym_AMP;
	v->a[77855] = anon_sym_SEMI;
	v->a[77856] = 9;
	v->a[77857] = actions(3);
	v->a[77858] = 1;
	v->a[77859] = sym_comment;
	small_parse_table_3893(v);
}

void	small_parse_table_3893(t_small_parse_table_array *v)
{
	v->a[77860] = actions(2602);
	v->a[77861] = 1;
	v->a[77862] = sym_file_descriptor;
	v->a[77863] = actions(2841);
	v->a[77864] = 1;
	v->a[77865] = aux_sym_heredoc_redirect_token1;
	v->a[77866] = actions(861);
	v->a[77867] = 2;
	v->a[77868] = anon_sym_LT_LT;
	v->a[77869] = anon_sym_LT_LT_DASH;
	v->a[77870] = actions(965);
	v->a[77871] = 2;
	v->a[77872] = anon_sym_AMP_AMP;
	v->a[77873] = anon_sym_PIPE_PIPE;
	v->a[77874] = actions(2598);
	v->a[77875] = 2;
	v->a[77876] = anon_sym_LT_AMP_DASH;
	v->a[77877] = anon_sym_GT_AMP_DASH;
	v->a[77878] = actions(1039);
	v->a[77879] = 3;
	small_parse_table_3894(v);
}

void	small_parse_table_3894(t_small_parse_table_array *v)
{
	v->a[77880] = anon_sym_SEMI_SEMI;
	v->a[77881] = anon_sym_AMP;
	v->a[77882] = anon_sym_SEMI;
	v->a[77883] = state(1322);
	v->a[77884] = 3;
	v->a[77885] = sym_file_redirect;
	v->a[77886] = sym_heredoc_redirect;
	v->a[77887] = aux_sym_redirected_statement_repeat1;
	v->a[77888] = actions(2596);
	v->a[77889] = 8;
	v->a[77890] = anon_sym_LT;
	v->a[77891] = anon_sym_GT;
	v->a[77892] = anon_sym_GT_GT;
	v->a[77893] = anon_sym_AMP_GT;
	v->a[77894] = anon_sym_AMP_GT_GT;
	v->a[77895] = anon_sym_LT_AMP;
	v->a[77896] = anon_sym_GT_AMP;
	v->a[77897] = anon_sym_GT_PIPE;
	v->a[77898] = 16;
	v->a[77899] = actions(3);
	small_parse_table_3895(v);
}

/* EOF small_parse_table_778.c */
