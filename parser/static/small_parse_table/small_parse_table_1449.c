/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1449.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7245(t_small_parse_table_array *v)
{
	v->a[144900] = state(2762);
	v->a[144901] = 1;
	v->a[144902] = sym__heredoc_body;
	v->a[144903] = state(3836);
	v->a[144904] = 1;
	v->a[144905] = sym_heredoc_body;
	v->a[144906] = 6;
	v->a[144907] = actions(57);
	v->a[144908] = 1;
	v->a[144909] = sym_comment;
	v->a[144910] = actions(8637);
	v->a[144911] = 1;
	v->a[144912] = sym__heredoc_body_beginning;
	v->a[144913] = actions(8639);
	v->a[144914] = 1;
	v->a[144915] = sym_simple_heredoc_body;
	v->a[144916] = state(2274);
	v->a[144917] = 1;
	v->a[144918] = sym__simple_heredoc_body;
	v->a[144919] = state(2275);
	small_parse_table_7246(v);
}

void	small_parse_table_7246(t_small_parse_table_array *v)
{
	v->a[144920] = 1;
	v->a[144921] = sym__heredoc_body;
	v->a[144922] = state(3852);
	v->a[144923] = 1;
	v->a[144924] = sym_heredoc_body;
	v->a[144925] = 4;
	v->a[144926] = actions(57);
	v->a[144927] = 1;
	v->a[144928] = sym_comment;
	v->a[144929] = actions(8678);
	v->a[144930] = 1;
	v->a[144931] = anon_sym_elif;
	v->a[144932] = actions(8676);
	v->a[144933] = 2;
	v->a[144934] = anon_sym_fi;
	v->a[144935] = anon_sym_else;
	v->a[144936] = state(3412);
	v->a[144937] = 2;
	v->a[144938] = sym_elif_clause;
	v->a[144939] = aux_sym_if_statement_repeat1;
	small_parse_table_7247(v);
}

void	small_parse_table_7247(t_small_parse_table_array *v)
{
	v->a[144940] = 4;
	v->a[144941] = actions(3);
	v->a[144942] = 1;
	v->a[144943] = sym_comment;
	v->a[144944] = actions(8452);
	v->a[144945] = 1;
	v->a[144946] = anon_sym_in;
	v->a[144947] = actions(8456);
	v->a[144948] = 1;
	v->a[144949] = aux_sym_heredoc_redirect_token1;
	v->a[144950] = actions(8454);
	v->a[144951] = 3;
	v->a[144952] = anon_sym_SEMI_SEMI;
	v->a[144953] = anon_sym_AMP;
	v->a[144954] = anon_sym_SEMI;
	v->a[144955] = 4;
	v->a[144956] = actions(3);
	v->a[144957] = 1;
	v->a[144958] = sym_comment;
	v->a[144959] = actions(8681);
	small_parse_table_7248(v);
}

void	small_parse_table_7248(t_small_parse_table_array *v)
{
	v->a[144960] = 1;
	v->a[144961] = anon_sym_in;
	v->a[144962] = actions(8685);
	v->a[144963] = 1;
	v->a[144964] = aux_sym_heredoc_redirect_token1;
	v->a[144965] = actions(8683);
	v->a[144966] = 3;
	v->a[144967] = anon_sym_SEMI_SEMI;
	v->a[144968] = anon_sym_AMP;
	v->a[144969] = anon_sym_SEMI;
	v->a[144970] = 6;
	v->a[144971] = actions(57);
	v->a[144972] = 1;
	v->a[144973] = sym_comment;
	v->a[144974] = actions(8545);
	v->a[144975] = 1;
	v->a[144976] = anon_sym_PIPE;
	v->a[144977] = actions(8669);
	v->a[144978] = 1;
	v->a[144979] = sym__special_character;
	small_parse_table_7249(v);
}

void	small_parse_table_7249(t_small_parse_table_array *v)
{
	v->a[144980] = actions(8687);
	v->a[144981] = 1;
	v->a[144982] = anon_sym_RPAREN;
	v->a[144983] = state(3426);
	v->a[144984] = 1;
	v->a[144985] = aux_sym__literal_repeat1;
	v->a[144986] = state(3510);
	v->a[144987] = 1;
	v->a[144988] = aux_sym_case_item_repeat1;
	v->a[144989] = 4;
	v->a[144990] = actions(3);
	v->a[144991] = 1;
	v->a[144992] = sym_comment;
	v->a[144993] = actions(8416);
	v->a[144994] = 1;
	v->a[144995] = anon_sym_in;
	v->a[144996] = actions(8420);
	v->a[144997] = 1;
	v->a[144998] = aux_sym_heredoc_redirect_token1;
	v->a[144999] = actions(8418);
	small_parse_table_7250(v);
}

/* EOF small_parse_table_1449.c */
